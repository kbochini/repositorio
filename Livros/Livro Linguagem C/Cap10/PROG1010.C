#include <stdio.h>
#include <stdlib.h> /* Por causa da fun��o exit */

main()
{
  FILE *fp;
  int i,n;
  float v[10],x;

  /* Ler os Dados a partir do Teclado */
  for (i=0; i<10; i++)
    {
      printf("Introd. o %d-esimo N� real: ",i+1);
      scanf("%f",&v[i]);
    }


  /* Abrir o Ficheiro DADOS.DAT */
  if ((fp = fopen("DADOS.DAT","w+b"))==NULL)
    { printf("Imposs�vel Criar o ficheiro %s\n","DADOS.DAT");
      exit(1);
    }

if (fwrite(v,sizeof(float),10,fp)!=10)
  fprintf(stderr, "N�o foram escritos todos os elementos!!!\n");

  printf("\nQual a ordem do N�mero que pretende ver 1..10: ");
  scanf("%d",&n);

  /* Mostrar o n-esimo N�mero */

  fseek(fp,(long) (n-1)*sizeof(float) , SEEK_SET);
  fread(&x,sizeof(float),1,fp);

  printf("\nO %d� valor introduzido foi %f\n",n,x);

  /* Mostrar o primeiro valor */

  rewind(fp);
  fread(&x,sizeof(float),1,fp);
  printf("O 1� valor introduzido foi %f\n",x);

  /* Mostrar o �ltimo valor */

  fseek(fp,-(long) sizeof(float),SEEK_END);
  fread(&x,sizeof(float),1,fp);
  printf("O �ltimo valor introduzido foi %f\n",x);

  fclose(fp);
}
