#include <stdio.h>
#include <stdlib.h> /* Por causa da fun��o exit */

main()
{
	FILE *fp;
	int i=0, valor,n;

		/* Criar o Ficheiro LIXO vazio*/
	if ((fp = fopen("LIXO","wb"))==NULL)
		{ printf("Imposs�vel Criar o ficheiro %s\n","LIXO");
		  exit(1);
		}
	fclose(fp);

	/* Abrir o Ficheiro */

	if ((fp = fopen("LIXO","rb"))==NULL)
		{ printf("Imposs�vel Abrir o ficheiro %s\n","LIXO");
		  exit(1);
		}

	puts(feof(fp)? "EOF" : "NOT EOF");

	/* Tentar ler um car�cter */
	fgetc(fp);

	puts(feof(fp)? "EOF" : "NOT EOF");

	fclose(fp);
}
