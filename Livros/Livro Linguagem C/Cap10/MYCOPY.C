#include <stdio.h>
#include <stdlib.h> /* Por causa da fun��o exit */

main(int argc, char*argv[])
{
  FILE *fin, *fout;
  int ch;

  /* Testar a Linha de Comando */
  if (argc!=3)
    {
      printf("Sintaxe: \n\n%s Origem Destino\n\n",argv[0]);
      exit(1);  /* Termina o Programa */
    }

  /* Abrir o Ficheiro de Origem */
  fin = fopen(argv[1],"rb");

  if (fin==NULL)
    { printf("Imposs�vel abrir o ficheiro %s\n",argv[1]);
      exit(2);
    }

  /* Abrir o Ficheiro de Destino */
  if ((fout = fopen(argv[2],"wb"))==NULL)
    { printf("Imposs�vel Criar o ficheiro %s\n",argv[2]);
      exit(3);
    }

  while ((ch=fgetc(fin))!=EOF)
    fputc(ch,fout);

 fclose(fin);
 fclose(fout);
}


