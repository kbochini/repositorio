#include <stdio.h>
#include <stdlib.h> /* Por causa da fun��o exit */

main(int argc, char*argv[])
{
	FILE *fp;
	int conta=0;

	if (argc!=2)
     { printf("Sintaxe:\n\n%s ficheiro\n\n",argv[0]);
		exit(1);
	 }

	if ((fp = fopen(argv[1],"rb"))==NULL)
		{ printf("Imposs�vel Abrir o ficheiro %s\n",argv[1]);
		  exit(2);
		}
	while (!feof(fp))
		{ fgetc(fp); /* Ler um char */
		  conta++;
		}
	fclose(fp);

  printf("Total de Caracteres: %d\n",conta);
}
