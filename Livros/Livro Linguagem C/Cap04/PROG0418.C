#include <stdio.h>

main()
{
  int i,n;

  printf("Introd. um N�: "); scanf("%d",&n);

  for (i=n; ; i++) /* Ciclo Infinito */
	 {
		if (i%10 == 0) /* M�ltiplo de 10 */
		  break;
		else
		  if (i%3 == 0)
		    continue;
		printf("%d\n",i);
	 }
}
