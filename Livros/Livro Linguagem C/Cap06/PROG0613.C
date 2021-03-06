#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS  49	/* Total de N�s do Jogo */
#define MIN_APOSTA  6	/* Aposta Minima - 6 N�s */
#define NUM_LIN  7  /* N� de n�s apres. por linha no boletim */

/* Declara��o das Fun��es */
void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);


/*
 * Inicializa o gerador de n�s aleat�rios com um n� que depende 
 * da hora a que se executa a fun��o
 */

void Inic_Random()
{
 long ultime;
 time(&ultime);
 srand((unsigned) ultime);
}


/* Inic. a ZERO o vector de controlo dos n�s seleccionados  */
void Inic(int v[])
{
	int i;
	for(i=0;i<NUMS;i++)
			v[i]=0;
}

/*
 * Le o n� de N�meros a apostar. Aceita valores entre MIN_APOSTA e NUMS.
 * Aceita o valor ZERO para indicar que se quer terminar o Prog.
 */

int Ler_Ns_Apostar()
{
	int n;
	do
	 {
		printf("Quantos N�s quer apostar ( 0 - Terminar): ");
		scanf("%d",&n);
	 }
	while ((n<MIN_APOSTA || n >NUMS) && n!=0);
return n;
}

/*
 * Gera n N�meros aleat. e coloca a respectiva posi��o do vector 
 * com o valor 1 que indica que esse n� foi seleccionado.
 */

void Gerar(int *v, int n)
{
  int i,indice;
  for (i=1;i<=n;i++)
   { indice = rand()%NUMS; /* Devolve um n� aleat�rio entre 0 e NUMS-1 */
 	 if (v[indice]==0)       /* N�o foi seleccionado */
	   v[indice]=1;
	 else   	/* Este n� j� tinha sido seleccionado, 	         */
		i--;	/* logo decrementa-se o contador para voltar a  */
		}	/* calcular mais uma vez o i-�simo n� aleat�rio */
   }

/*
 * Apresenta o formato do boletim colocando XX nos n�s 
 * seleccionados para a aposta.
 */

void Apresentar(int res[])
{
	int i;
	for (i=0;i<NUMS;i++)
		{
			if (res[i]==0)
				printf(" %2d",i+1);
			else
				printf(" XX");
			if ((i+1)%NUM_LIN==0) putchar('\n');
		}
  putchar('\n');
}

main()
{ int vector[NUMS];
	int n_nums; /* N� de N�meros a Jogar no jogo 6..49 */

	Inic_Random();
	while(1)
	{
		Inic(vector);
		if ((n_nums = Ler_Ns_Apostar())==0) break;
		Gerar(vector,n_nums);	/* Gerar os N�s a Apostar */
		Apresentar(vector);
	}
}


