/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 2
obs:
	-	Exercicio 2: Pe�a ao tulizador 2 numeros, e fa�a a sua divis�o, utilize os procedimentos	correctos para que o resultado apare�a o mais correcto possivel, como desafio fa�a com que apenas apare�am 3 casas decimais.
*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Regi�o Main.
#pragma region Main
//Programa principal.
int main2()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis.
	float a = 0;
	float b = 0;
	float c = 0;
	//Input e output.
	printf("\n\tEste programa realiza a divis�o de dois n�meros.\n");
	printf("\n\tIntroduza o primeiro n�mero: ");
	scanf("%f", &a);
	printf("\n\tIntroduza o segundo n�mero: ");
	scanf("%f", &b);
	//Opera��o.
	c = a / b;
	//Resposta.
	printf("\n\tO resultado da divis�o de %.3f com %.3f � igual a: %.3f\n\n\t", a, b, c);	
	//Para o programa n�o fechar autom�ticamente solicitamos um input ao utilizador.
	getche();
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
#pragma endregion