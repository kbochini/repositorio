/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 3
obs:
	-	Exercicio 3: Pe�a ao utilizador um numero, se o numero for maior que 10 o programa deve apitar e imprimir a seguinte mensagem de errro, caso seja inferior, deve mostrar o numero inserido multiplicado por PI, dever� definir este valor como constante.
*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Constante (Vari�vel global)
#define PI 3.14
//Regi�o Main.
#pragma region Main
//Programa principal.
int main3()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis.
	float a = 0;
	//Input e output.
	printf("\n\tEste programa verifica se um n�mero � maior ou menor que 10.\n");
	printf("\n\tIntroduza um n�mero: ");
	scanf("%f", &a);
	//Opera��o.//Resposta.
	if (a >= 10)
	{
		printf("\n\t\7ERRO!\n\n\t");
	}
	else
	{
		printf("\n\tO n�mero introduzido m�ltiplicado por PI � igual a: %f\n\n\t", a*PI);
	}	
	//Para o programa n�o fechar autom�ticamente solicitamos um input ao utilizador.
	getche();
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
#pragma endregion