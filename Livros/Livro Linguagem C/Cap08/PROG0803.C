#include <stdio.h>
int strlen(char *s); /* Prot�tipo da fun��o */

main()
{
  char s[100];
  char *ptr = s; /* Aponta para o primeiro car�cter de s */

  printf("Introduza uma String: "); gets(s);

  printf("%d\n", strlen(s));
}

int strlen(char *s)
{
char *ptr = s;	/* Guardar o endere�o inicial    	*/
while (*s!='\0')	/* Enquanto n�o chegarmos ao fim 	*/
	 s++;		/* Incrementar o apontador 		*/

return (int) (s-ptr);	/* Devolver a diferen�a entre os */
}				/* endere�os */
