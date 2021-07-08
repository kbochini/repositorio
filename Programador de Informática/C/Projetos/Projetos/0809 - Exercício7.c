/*
autor: Daniel
data: 08-07-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 7 - Ciclos
obs:

1. Escreva um programa em C para encontrar a soma dos primeiros 10 n�meros naturais.
Resultado esperado:
Os primeiros 10 n�meros naturais s�o:
1 2 3 4 5 6 7 8 9 10
A soma � : 55

2. Escreva um programa em C para exibir n termos de n�mero naturais e a sua soma.
Dados de teste : 7
Resultado esperado :
os primeiros n�meros naturais s�o:
1 2 3 4 5 6 7
A soma do n�mero natural at� 7 termos : 28

3. Escreva um programa em C para ler 10 n�meros do teclado e encontrar sua soma e m�dia.

4. Escreva um programa em C para exibir o cubo do n�meros at� dado um inteiro.
Dados do teste :
Insira o n�mero de termos : 5
Resultado esperado :
o n�mero � : 1 e o cubo do 1 � : 1
o n�mero � : 2 e o cubo dos 2 � : 8
o n�mero � : 3 e o cubo dos 3 � : 27
o n�mero � : 4 e o cubo dos 4 � : 64
o n�mero � : 5 e o cubo dos 5 � : 125

5. escreva um programa em C para exibir a tabuada de um determinado n�mero inteiro.
dados do teste :
insira o n�mero (tabela a ser calculada): 15
resultado esperado :

15 X 1 = 15
...
...
15 X 10= 150

6. crie um loop infinito de duas maneiras diferentes.


7. escreva um programa c para calcula o fatorial de um determinado n�mero.
Dados do teste:
Insira o n�mero: 5
Resultado esperado:
O fatorial de 5 � 120


8. Escreva um programa C para exibir N termos de n�meros naturais impares e a sua soma.
Dados do teste:
N�mero de entrada de termos: 10
resultado esperado:
Os n�meros impares s�o: 1 3 5 7 9 11 13 15 17 19


9. Escreva um programa em C para exibir o padrao abaixo usando um asterisco.
O padrao sendo o seguinte:
*

*
**
***
****

*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Regi�o main.
#pragma region Main
//Programa principal.
int main()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Introdu��o do programa.
	printf("\n\tEste programa serve para responder aos exerc�cios propostos.\n\t");
	//Declara��o de vari�veis.
	int numero = 0;
	int soma = 0;
	int controlo = 0;
	int media = 0;
	int padrao = 42;
	int vetor_padrao[4];
	vetor_padrao[0] = padrao;
	int fatorial = 0;
	//Ciclo para repetir.
	int repetir = 0;
	do
	{
		//Menu do programa.
		int menu = 0;
		printf("\n\t1 - Exerc�cio N.� 1 - Encontrar a soma dos primeiros 10 n�meros naturais.\n");
		printf("\n\t2 - Exerc�cio N.� 2 - Exibir n termos de n�mero natural e sua soma.\n");
		printf("\n\t3 - Exerc�cio N.� 3 - Ler 10 n�meros do teclado e encontrar sua soma e m�dia.\n");
		printf("\n\t4 - Exerc�cio N.� 4 - Exibir o cubo do n�mero at� dado um inteiro.\n");
		printf("\n\t5 - Exerc�cio N.� 5 - Tabuada de um n�mero inteiro.\n");
		printf("\n\t6 - Exerc�cio N.� 6 - Loop infinito de duas maneiras diferentes.\n");
		printf("\n\t7 - Exerc�cio N.� 7 - Fatorial de um n�mero.\n");
		printf("\n\t8 - Exerc�cio N.� 8 - Exibir N termos de n�meros naturais impares e a sua soma.\n");
		printf("\n\t9 - Exerc�cio N.� 9 - N�mero 9 desenho usando asterisco.\n");
		printf("\n\t10 - Sair.");
		printf("\n\n\tEscolha a op��o: ");
		scanf(" %d", &menu);
		switch (menu)
		{
		case 1:
			printf("\n\tExerc�cio N.� 1 - Encontrar a soma dos primeiros 10 n�meros naturais.\n\t");
			printf("\n\t");
			printf("Os primeiros 10 n�meros naturais s�o : ");
			for (numero = 1; numero <= 10; numero++)
			{
				printf("%d ", numero);
				soma = soma + numero;
			}
			printf("\n\t");
			printf("\n\tA soma �: %d\n\t", soma);
			soma = 0;
			numero = 0;
			break;
		case 2:
			printf("\n\tExerc�cio N.� 2 - Exibir n termos de um n�mero natural e sua soma.\n\t");
			printf("\n\tIntroduza um n�mero: ");
			scanf(" %d", &controlo);
			printf("\n\t");
			printf("Os primeiros %d n�meros naturais s�o: ", controlo);
			for (numero = 1; numero <= controlo; numero++)
			{
				printf("%d ", numero);
				soma = soma + numero;
			}
			printf("\n\t");
			printf("\n\tA soma do n�mero natural at� %d termos �: %d", controlo, soma);
			printf("\n\t");
			soma = 0;
			numero = 0;
			controlo = 0;
			break;
		case 3:
			printf("\n\tExerc�cio N.� 3 - Ler 10 n�meros do teclado e encontrar sua soma e m�dia.\n\t");
			for (numero = 1; numero <= 10; numero++)
			{
				printf("\n\tIntroduza um n�mero inteiro: ");
				scanf(" %d", &controlo);
				soma = soma + controlo;
			}
			media = soma / 10;
			printf("\n\tA soma dos n�meros introduzidos �: %d\n\t", soma);
			printf("\n\tA media dos n�meros introduzidos �: %d\n\t", media);
			soma = 0;
			numero = 0;
			media = 0;
			controlo = 0;
			break;
		case 4:
			printf("\n\tExerc�cio N.� 4 - Exibir o cubo do n�mero at� dado um inteiro.\n\t");
			printf("\n\tIntroduza um n�mero inteiro: ");
			scanf(" %d", &controlo);
			for (numero = 1; numero <= controlo; numero++)
			{
				if (numero == 1)
				{
					printf("\n\tO n�mero �: %d e o cubo do %d �: %d", numero, numero, numero * numero * numero);
				}
				else
				{
					printf("\n\tO n�mero �: %d e o cubo dos %d �: %d", numero, numero, numero * numero * numero);
				}
				printf("\n\t");
			}
			soma = 0;
			numero = 0;
			media = 0;
			controlo = 0;
			break;
		case 5:
			printf("\n\tExerc�cio N.� 5 - Tabuada de um n�mero inteiro.\n\t");
			printf("\n\tIntroduza um n�mero inteiro: ");
			scanf(" %d", &controlo);
			for (numero = 1; numero <= 10; numero++)
			{
				printf("\n\t%d X %d = %d", numero, controlo, numero * controlo);
				printf("\n\t");
			}
			soma = 0;
			numero = 0;
			media = 0;
			controlo = 0;
			break;
		case 6:
		{
			int repetir_loop = 0;
			do
			{
				printf("\n\tExerc�cio N.� 6 - Loop infinito de duas maneiras diferentes.\n\t");
				int menu_loop = 0;
				printf("\n\tATEN��O - Qualquer op��o seguinte resultar� num ciclo infinito sem possibilidade de retornar ao estado atual, para parar o ciclo infinito use: CTRL + C.\n");
				printf("\n\t1 - Loop Do while infinito.\n");
				printf("\n\t2 - Loop For infinito.\n");
				printf("\n\t3 - Voltar.");
				printf("\n\n\tEscolha a op��o: ");
				scanf(" %d", &menu_loop);
				if (menu_loop == 1)
				{
					do
					{
						printf("Do while infinito. ");
					}
					while (controlo == 0);
				}
				else if (menu_loop == 2)
				{
					for (numero = 1;; numero++)
					{
						printf("For infinito. ", numero);
					}
				}
				else if (menu_loop == 3)
				{
					printf("\n\tDeseja mesmo voltar? 1 - Sim / 0 - N�o: ");
					scanf(" %d", &repetir_loop);
				}
			} while (repetir_loop == 0); 
		}
			break;
		case 7:
			printf("\n\tExerc�cio N.� 7 - Fatorial de um n�mero.\n\t");
			printf("\n\tIntroduza um n�mero inteiro: ");
			scanf(" %d", &controlo);
			numero = controlo;
			for (fatorial = 1; numero > 1; numero--)
			{
				fatorial = fatorial * numero;
			}
			printf("\n\tfatorial de %d �: %d\n\t", controlo, fatorial);
			printf("\n\t");
			numero = 0;
			fatorial = 0;
			controlo = 0;
			break;
		case 8:
			printf("\n\tExerc�cio N.� 8 - Exibir N termos de n�meros naturais impares e a sua soma.\n\t");
			printf("\n\tIntroduza um n�mero: ");
			scanf(" %d", &controlo);
			printf("\n\t");
			printf("Os primeiros %d n�meros impares naturais s�o: ", controlo);
			for (numero = 1; numero < controlo*2; numero+=2)
			{
				printf("%d ", numero);
				soma = soma + numero;
			}
			printf("\n\t");
			printf("\n\tA soma dos n�meros naturais impares at� %d termos �: %d", controlo, soma);
			printf("\n\t");
			soma = 0;
			numero = 0;
			controlo = 0;
			break;
		case 9:
			printf("\n\tExerc�cio N.� 9 - Desenho usando asterisco.\n\t");
			printf("\n");
			for (numero = 1; numero <= 1; numero++)
			{			
				printf("%c", padrao);
				printf("\n");								
				printf("%c", padrao);
				printf("%c", padrao);
				printf("\n");
				printf("%c", padrao);
				printf("%c", padrao);
				printf("%c", padrao);
				printf("\n");	
				printf("%c", padrao);
				printf("%c", padrao);
				printf("%c", padrao);
				printf("%c", padrao);
				printf("\n");				
			}
			printf("\n\t");
			numero = 0;
			break;
		case 10:
			printf("\n\tDeseja mesmo sair? 1 - Sim / 0 - N�o: ");
			scanf(" %d", &repetir);
			break;
		}
	} while (repetir == 0);
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
//Fim da regi�o main.
#pragma endregion