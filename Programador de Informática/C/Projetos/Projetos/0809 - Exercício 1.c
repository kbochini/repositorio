/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 1
obs:
	-	Exercicio 1: Pe�a ao utilizador dois numeros,
		fa�a a soma entre eles e de seguida apresente
		na consola uma mensagem a dizer "Numero � impar"
		caso o resultado da soma seja impar.
*/
//Inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996
#pragma warning (disable: 4996)
//Regi�o Main
#pragma region Main
//Programa principal
int main1()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int a = 0;
	int b = 0;
	int c = 0;
	//Input e output
	printf("introduza um numero: ");
	scanf("%d", &a);
	printf("introduza outro numero : ");
	scanf("%d", &b);
	//Opera��o
	c = a + b;
	//
	if (c % 2 == 0)
	{
		printf("o resultado da soma de %d com %d forma um numero par: %d", a, b, c);
	}
	else
	{
		printf("o resultado da soma de %d com %d forma um numero impar: %d", a, b, c);
	}
	//Para o programa n�o fechar autom�ticamente solicitamos um input ao utilizador.
	getche();
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
#pragma endregion