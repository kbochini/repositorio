#include <stdio.h>
#include <string.h>

main()
{ char s[200], 
       outra[200]; /* 200 posi��es - n�o v� o diabo tec�-las */

  printf("Qual a sua String:"); gets(s);
  
  /* Colocar na string outra uma c�pia da string s */

  strcpy(outra,s);

  printf("String Original: %s\nCopia: %s\n",s,outra);
}
