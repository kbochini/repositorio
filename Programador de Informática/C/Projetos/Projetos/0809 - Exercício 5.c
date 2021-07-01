/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 5
obs:
	-	Exercicio 5: Neste exercicio por favor crie um programa para verificar se um numero inserido � numero primo,
e mostre uma mensagem a dizer" o numero inserido � primo", caso n�o seja, imprima a mensagem "o numero inserido N�O � primo"
Tamb�m verifique se o numero inserido � superior a 10 e mostre uma mensagem caso o seja- "o numero inserido � superior a 10"
Tamb�m ter� de fazer valida��o de inputs, sendo que o programa deve poder detectar que o utilizador carregou numa tecla que n�o � um numero
e avisar de tal erro atrav�s de uma mensagem.
*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Constante.
#define PI 3.14
//Regi�o Main.
#pragma region Main
//Programa principal.
int main()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Introdu��o do programa.
	printf("\n\tEste programa verifica se � um n�mero primo.\n\n\t");
	//Declara��o de vari�veis.
	char a = ' ';
	int b = 0;
	//Ciclo para repetir.
	int repetir = 1;
	do
	{
		//Output.		
		printf("Introduza um n�mero: ");
		//Input.
		//Para limpar o buffer de mem�ria do teclado na segunda leitura adiciona-se um espa�o antes de %c.
		//scanf(" %c", &a);
		scanf(" %d", &b);
		//Opera��o.//Resposta.
				
		//printf("Foi introduzido %d cujo caracter = %c\n", b, (char) b);
		/*printf("%c", a);
		a = b;
		if (a >= 48 && a <= 57)
		{
			printf("\n\tIntroduziu um n�mero.\n\t");
		}
		else if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
		{
			printf("\n\tIntroduziu uma letra.\n\t");
		}
		else
		{
			printf("\n\tIntroduza um n�mero ou uma letra.\n\t");
		}*/
		printf("\n\tDeseja continuar? 1 - Sim / 0 - N�o: ");
		scanf(" %d", &repetir);
		printf("\n\t");
	} while (repetir == 1);
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
//Fim da Regi�o Main
#pragma endregion