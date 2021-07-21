/*
autor: Daniel
data: 16-07-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 10 - Fun��es e Procedimentos.
obs:

1. Escreva um m�todo C para encontrar o menor n�mero entre tr�s n�meros.
Dados de teste:
Insira o primeiro n�mero: 25
Insira o segundo n�mero: 37
Insira o terceiro n�mero: 29
Resultado esperado:
O menor valor � 25
2. Escreva um m�todo em C para calcular a m�dia de tr�s n�meros inteiros
Dados de teste:
Insira o primeiro n�mero: 25
Insira o segundo n�mero: 45
Insira o terceiro n�mero: 65
Resultado esperado:
O valor m�dio � 45,0
3. Escreva um m�todo em C para calcular o valor do investimento futuro a uma determinada taxa de juros por um determinado n�mero de anos.
Dados de amostra:
Insira o valor do investimento: 1000
Insira a taxa de juros: 10
Insira o n�mero de anos: 5
4. Escreva um programa em C para imprimir todos os n�meros perfeitos em um determinado intervalo usando a fun��o.
Dados de teste:
Insira o limite m�nimo de pesquisa de n�meros perfeitos: 1
Insira o limite m�ximo de pesquisa de n�meros perfeitos: 100
Resultado esperado :
Os n�meros perfeitos entre 1 a 100 s�o:
6 28

*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Regi�o main.
#pragma region Main
//Assinatura/Prot�tipo das Fun��es e Procedimentos.
void menor_de_tres_numeros(int num1, int num2, int num3);
float media_de_tres_inteiros(int num1, int num2, int num3);
float investimento_futuro(float valor, int anos, float taxa);
//Programa principal.
int main()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Introdu��o do programa.
	printf("\n\tEste programa serve para responder aos exerc�cios propostos.\n\t");
	//Declara��o de vari�veis.
	int num1 = 0, num2 = 0, num3 = 0, anos = 0;
	float valor = 0.0, resultado = 0.0, taxa = 0.0, retorno = 0.0;
	//Ciclo para repetir.
	int repetir = 0;
	do
	{
		//Menu do programa.
		int menu = 0;
		printf("\n\t1 - Exerc�cio N.� 1 - Encontrar o menor n�mero entre tr�s n�meros.\n");
		printf("\n\t2 - Exerc�cio N.� 2 - Calcular a m�dia de tr�s n�meros inteiros.\n");
		printf("\n\t3 - Exerc�cio N.� 3 - Calcular o valor do investimento futuro a uma determinada taxa de juros por um determinado n�mero de anos.\n");
		printf("\n\t4 - Exerc�cio N.� 4 - Imprimir todos os n�meros perfeitos em um determinado intervalo usando a fun��o.\n");
		printf("\n\t10 - Sair.");
		printf("\n\n\tEscolha a op��o: ");
		scanf(" %d", &menu);
		switch(menu)
		{
		case 1:
			printf("\n\tExerc�cio N.� 1 - Encontrar o menor n�mero entre tr�s n�meros.\n\t");
			printf("\n\tIntroduza o primeiro n�mero: ");
			scanf(" %d", &num1);
			printf("\n\tIntroduza o segundo n�mero: ");
			scanf(" %d", &num2);
			printf("\n\tIntroduza o terceiro n�mero: ");
			scanf(" %d", &num3);
			menor_de_tres_numeros(num1, num2, num3);
			break;
		case 2:
			printf("\n\tExerc�cio N.� 2 - Calcular a m�dia de tr�s n�meros inteiros.\n\t");
			printf("\n\tIntroduza o primeiro n�mero: ");
			scanf(" %d", &num1);
			printf("\n\tIntroduza o segundo n�mero: ");
			scanf(" %d", &num2);
			printf("\n\tIntroduza o terceiro n�mero: ");
			scanf(" %d", &num3);
			resultado = media_de_tres_inteiros(num1, num2, num3);
			printf("\n\tA m�dia entre %d, %d e %d � %.2f.\n", num1, num2, num3, resultado);
			break;
		case 3:
			printf("\n\tExerc�cio N.� 3 - Calcular o valor do investimento futuro a uma determinada taxa de juros por um determinado n�mero de anos.\n\t");
			printf("\n\tIntroduza o valor: ");
			scanf(" %f", &valor);
			printf("\n\tIntroduza o numero de anos: ");
			scanf(" %d", &anos);
			printf("\n\tIntroduza a taxa: ");
			scanf(" %f", &taxa);
			taxa = taxa / 100;
			retorno = investimento_futuro(valor, anos, taxa);
			taxa = taxa * 100;
			printf("\n\tO retorno do investimento de %.2f em %d anos � taxa de %.2f %% � de %.2f.\n", valor, anos, taxa, retorno);
			break;
		case 4:
			printf("\n\tExerc�cio N.� 4 - Imprimir todos os n�meros perfeitos em um determinado intervalo usando a fun��o.\n\t");
						
			break;
		case 10:
			printf("\n\tDeseja mesmo sair? 1 - Sim / 0 - N�o: ");
			scanf(" %d", &repetir);
			break;
		}
	} while(repetir == 0);
	//Pedir ao utilizador um caracter para sair.
	printf("\n\tPressione ENTER para sair.\n");
	//Para parar no final.
	getchar();
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
//Fun��es e Procedimentos.
void menor_de_tres_numeros(int num1, int num2, int num3)
{
	if(num1 < num2 && num1 < num3)
	{
		printf("\n\tO n�mero %d � o menor n�mero.\n", num1);		
	}
	else if(num2 < num1 && num2 < num3)
	{
		printf("\n\tO n�mero %d � o menor n�mero.\n", num2);		
	}
	else
	{
		printf("\n\tO n�mero %d � o menor n�mero.\n", num3);		
	}
}
float media_de_tres_inteiros(int num1, int num2, int num3)
{
	float resultado;
	resultado = (num1 + num2 + num3)/3;
	return resultado;
}
float investimento_futuro(float valor, int anos, float taxa)
{
	float retorno;
	retorno = valor * anos * taxa;
	return retorno;
}
//Fim da regi�o main.
#pragma endregion