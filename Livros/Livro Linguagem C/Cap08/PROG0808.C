#include <stdio.h>
#include <string.h>

char *strrchr(char *str , char ch)	/* Vers�o 1 */
{
	int i;
	char *ptr = NULL;
	for (i=0; str[i]!='\0'; i++)
		if (str[i]==ch)
			ptr=&str[i];

	return ptr;
}

char *strrchr1(char *str , char ch)   /* Vers�o 2 */
{
	char *ptr=str+strlen(str)-1; /* Colocar no ult. char da string */
	while (ptr >= str)
		if (*ptr==ch)
			return ptr;
		else
			ptr--;

 return NULL;
}


main()
{
  char Nome[100];
  char *Apelido;
  printf("Introd. uma string: ");gets(Nome);

  Apelido = strrchr(Nome,' '); 
  if (Apelido==NULL) /* N�o tem apelido. N�o existe o espa�o */
    Apelido=Nome;
  else
    Apelido++;     /* Pois estava a apontar o espa�o em branco */
  puts(Apelido);
}

