#include <stdio.h>

int x_isdigit(char ch)
{
  return (ch >='0' && ch <= '9');
}

/* Escreve todos os caracteres n�o d�gitos */

main()
{
  char c;
  while(1) /* Termina com CTRL-C */
	{
	 c=getchar();
	 if (!x_isdigit(c)) /* se n�o for digito */
		putchar(c);
	}
}

