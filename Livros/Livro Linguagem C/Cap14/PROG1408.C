 #include <stdio.h>

main()
{
 unsigned char ch = 0xFF & 0x80; /* Mascara para obter o 1� Bit */
 int i;
 for (i=0;i<=8;i++)
   printf("i=%d: valor: %d\n",i,ch >> i);  

}
