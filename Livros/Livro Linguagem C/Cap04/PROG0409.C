#include <stdio.h>

main()
{
	char opcao;
	do
	 {
		printf("\tM E N U    P R I N C I P A L\n");
		printf("\n\n\t\tClientes");
		printf("\n\n\t\tFornecedores");
		printf("\n\n\t\tEncomendas");
		printf("\n\n\t\tSair");
		printf("\n\n\n\t\t\tOp�ao:");
		scanf(" %c", &opcao);
		fflush(stdin); /* Limpar o Buffer do teclado */
		switch (opcao)
			{
			 case 'c':
			 case 'C': puts("Op��o CLIENTES"); break;
			 case 'f':
			 case 'F': puts("Op��o FORNECEDORES"); break;
			 case 'e':
			 case 'E': puts("Op��o ENCOMENDAS"); break;
			 case 's':
			 case 'S': break; /* N�o faz nada */
			 default : puts("Op��o INVALIDA!!!");
		  }
		getchar(); /* Parar o ecr� */
	 }
	while (opcao!= 's' && opcao != 'S');
}
