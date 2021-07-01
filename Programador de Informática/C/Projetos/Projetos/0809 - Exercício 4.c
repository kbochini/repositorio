/*
autor: Daniel
data: 30-06-2021
vers: 1.0
email: ldvssr@icloud.com
desc: Exercicio 4
obs:
	-	Exercicio 4: Realize um programa na qual pede ao utilizador para pressionar numa tecla qualquer do teclado, o seu programa deve ser capaz de verificar se a tecla pressionada foi uma letra ou um numero, dependendo do caso dever� mostrar uma mensagem a indicar tal ao utilizador:
		Exemplo: " Carregou num numero" ou " Carregou numa letra (maiuscula ou minuscula)" TABELA ASCII
*/
//Inclus�o de bibliotecas.
#include <stdio.h>
#include <locale.h>
//Desabilitar o aviso de erro 4996.
#pragma warning (disable: 4996)
//Regi�o Main.
#pragma region Main
//Programa principal.
int main4()
{
	//Permite reconhecer os caracteres portugueses.
	setlocale(LC_ALL, "Portuguese");
	//Introdu��o do programa.
	printf("\n\tEste programa verifica se a tecla a introduzir � uma letra ou um n�mero.\n\n\t");
	//Declara��o de vari�veis.
	char a = ' ';
	//Ciclo para repetir.
	int repetir = 0;
	do
	{		
		//Output.		
		printf("Pressione uma tecla: ");		
		//Input.
		//Para limpar o buffer de mem�ria do teclado na segunda leitura adiciona-se um espa�o antes de %c ou  o comando fflush (stdin);.
		//fflush(stdin);
		scanf(" %c", &a);
		printf("%c", a);
		//Opera��o.//Resposta.			
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
		}
		printf("\n\tDeseja continuar? 0 - Sim / 1 - N�o: ");
		scanf(" %d", &repetir);
		printf("\n\t");	
	}
	while (repetir == 0);	
	//Para devolver 0 caso o programa seja executado corretamente.
	return 0;
}
//Fim da Regi�o Main
#pragma endregion