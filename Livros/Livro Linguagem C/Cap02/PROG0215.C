#include <stdio.h>

main()
{ int num=1000;
  printf("Introduza um Car�cter: ");
  scanf("%c",&num);
  printf("O valor de num = %d cujo car�cter = '%c'\n",
			 num,(char) num);
}
