#include <stdio.h>
#include <stdlib.h> /* Por causa da fun��o exit */

main()
{
	FILE *fp;
	int i, v[10],n;

		/* Abrir o Ficheiro DADOS.DAT */
	if ((fp = fopen("DADOS.DAT","rb"))==NULL)
		{ printf("Imposs�vel Abrir o ficheiro %s\n","DADOS.DAT");
		  exit(1);
		}

	n = fread(v,sizeof(int),10,fp);
	if (n!=10)
		fprintf(stderr, "Foram lidos apenas %d Elementos!!!\n",n);

		/* Apresentar os dados ao utilizador */
	for (i=0; i<n; i++)
		printf("%2d� N�: %d\n",i+1,v[i]);

	fclose(fp);
}

