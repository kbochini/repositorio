#include <stdio.h>

main()
{
  int i,nmin,nmax,tmp;

  do
	 {
		printf("Introd. um N� entre 0 e 255: ");
		scanf("%d",&nmin);
	 }
  while (nmin < 0 || nmin > 255);

  do
	 {
		printf("Introd. outro N� entre 0 e 255: ");
		scanf("%d",&nmax);
	 }
  while (nmax < 0 || nmax > 255);

  /* Verificar se e necess�rio trocar os valores das vari�veis */

  if (nmin > nmax)
	 {
		tmp = nmin;
		nmin = nmax;
		nmax = tmp;
	 }

  for (i=nmin ; i<=nmax ; i++)
	 printf("%3d --> %c\n",i, (char) i);

}
