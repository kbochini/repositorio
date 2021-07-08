/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 6 - For Loop
obs:
	-	Exercicio 6:

Escreva um programa em C para imprimir os primeiros 10 n�meros naturais.
Resultado Esperado :
1 2 3 4 5 6 7 8 9 10

ESTES IREMOS FAZER NA PR�XIMA AULA
____________________________________

2. Escreva um programa C para encontrar a soma dos primeiros 10 n�meros naturais.
Resultado Esperado :
Os primeiros 10 n�meros naturais s�o :
1 2 3 4 5 6 7 8 9 10
A Soma � : 55

3. Escreva um programa em C para exibir n termos de n�mero natural e sua soma.
Dados de teste : 7
Resultado esperado :
O primeiro 7 n�mero natural � :
1 2 3 4 5 6 7
A soma do n�mero natural at� 7 termos : 28

4. Escreva um programa em C para ler 10 n�meros do teclado e encontrar sua soma e m�dia.

5. Escreva um programa em C para exibir o cubo do n�mero at� dado um inteiro.
Dados de teste:
Insira o n�mero de termos: 5
Resultado esperado :
O n�mero �: 1 e o cubo do 1 �: 1
O n�mero �: 2 e o cubo dos 2 �: 8
O n�mero �: 3 e o cubo dos 3 � : 27
O n�mero �: 4 e o cubo dos 4 �: 64
O n�mero �: 5 e o cubo dos 5 �: 125
*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Regi�o main.
#pragma region Main
//Programa principal.
int main6()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Introdu��o do programa.
	printf("\n\tEste programa serve para responder aos exerc�cios propostos.\n\t");
	//Declara��o de vari�veis.
	int numero = 0;		
	//Ciclo para repetir.
	int repetir = 0;
	do
	{
		//Menu do programa.
		int menu = 0;
		printf("\n\t1 - Exerc�cio N.� 1 - Imprimir os primeiros 10 n�meros naturais.\n\t2 - Exerc�cio N.� 2 - Encontrar a soma dos primeiros 10 n�meros naturais.\n\t3 - Exerc�cio N.� 3 - Exibir n termos de n�mero natural e sua soma.\n\t4 - Exerc�cio N.� 4 - Ler 10 n�meros do teclado e encontrar sua soma e m�dia.\n\t5 - Exerc�cio N.� 5 - Exibir o cubo do n�mero at� dado um inteiro.\n\t6 - Sair");
		printf("\n\n\tEscolha a op��o:\t");
		scanf(" %d", &menu);		
		switch (menu)
		{
		case 1:
			printf("\n\tExerc�cio N.� 1 - Imprimir os primeiros 10 n�meros naturais.");
			printf("\n\n\t");
			for (numero = 1; numero <= 10; numero++)
			{
				printf("%d ", numero);
			}
			printf("\n");
			break;
		case 2:			
			printf("\n\tExerc�cio N.� 2 - Encontrar a soma dos primeiros 10 n�meros naturais.");
			printf("\n\t");
			break;
		case 3:			
			printf("\n\tExerc�cio N.� 3 - Exibir n termos de n�mero natural e sua soma.");
			printf("\n\t");
			break;
		case 4:			
			printf("\n\tExerc�cio N.� 4 - Ler 10 n�meros do teclado e encontrar sua soma e m�dia.");
			printf("\n\t");
			break;
		case 5:			
			printf("\n\tExerc�cio N.� 5 - Exibir o cubo do n�mero at� dado um inteiro.");
			printf("\n\t");
			break;
		case 6:				
				printf("\n\tDeseja mesmo sair? 1 - Sim / 0 - N�o: \t");
				scanf(" %d", &repetir);				
			break;
		}
	} while (repetir == 0);
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
//Fim da regi�o main.
#pragma endregion