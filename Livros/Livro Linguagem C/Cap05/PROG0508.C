#include <stdio.h>

void linha(); /* Declara��o da Fun��o linha*/

main()
{
  linha();
  printf("Hello World\n");
  linha();
}

void linha()
{
  int i;
  for (i=1; i<=20; i++)
	 putchar('*');
  putchar('\n');
}
