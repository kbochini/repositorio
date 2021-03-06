#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM])		/* Omitir uma dimens�o */
{
  int i,j;
  for(i=0;i<DIM;i++)
    for(j=0;j<DIM;j++)
      s[i][j]=ESPACO;
}

void mostra(char s[DIM][DIM]) 	/* Ambas as Dimens�es */
{ int i,j;
  for (i=0;i<DIM;i++)
    {
      for (j=0;j<DIM;j++)
        printf("%c %c",s[i][j],j==DIM-1?' ':'|');
      if (i!=DIM-1) printf("\n--------");
      putchar('\n');
    }

}

main()
{
  char Galo[DIM][DIM];
  int posx, posy;
  char ch = '0';  /* Car�cter a Jogar */
  int n_jogadas = 0;

  inic(Galo);
  while (1)     /* Ciclo Infinito */
   { mostra(Galo);
     printf("\nIntroduza a Posi��o de Jogo Linha Coluna: ");
     scanf("%d %d",&posx,&posy);
     posx--;posy--;  /* Pois os �ndices do vector come�am em 0 */
     if (Galo[posx][posy]==ESPACO) /* Casa Livre */
       { Galo[posx][posy] = ch = (ch == '0') ? 'X' : '0';
         n_jogadas++;
       }
     else
       printf("Posi��o j� ocupada\nJogue Novamente!!!\n");
     if (n_jogadas==DIM*DIM)
       break; /* Acabar o Programa */
   }
   mostra(Galo);
}
