#include <stdio.h>


unsigned fact(int n)
{
	if (n==0)  /* Crit�rio de Paragem */
   return 1;
	else
   return n*fact(n-1); /* Chamada Recursiva */

}

main()
{
int k;
while (scanf("%d",&k)) /* Enquanto ler n�meros */
  printf("%d! = %u\n",k,fact(k));
}
