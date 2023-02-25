/* ) Fazer uma função que verifica se uma substring pertence a uma string.*/
#include<stdio.h>
int main (void)
{
	int i=0, j=0, cont=0;
	char ch, string[51], stringz[26];
	do
	{
		i=0;
		j=0;
		cont=0;
		
		printf ("Informe uma string: ");
		setbuf (stdin, NULL);
		gets (string);
		printf ("Informe uma substring: ");
		setbuf (stdin, NULL);
		gets (stringz);
		
		while (stringz[i]!='\0' && string[j]!='\0')
		{
			if (stringz[i]==string[j])
			{
				i++;
				j++;
				cont++;
			}
			else
			{
				i=0;
				j++;
			}
		}
		if (cont<=i)
		{
			printf ("A substring (%s) esta na string (%s)", stringz, string);
		}
	    else if (string[j+1]=='\0')
		{
			printf ("Esta substring nao pertence a string principal");
		}
		
		
		
		printf("\nDeseja repetir o programa? ");
		setbuf(stdin, NULL);
		scanf("%c", &ch);
		
	}while(ch=='s'|| ch=='S');
	return 0;
}
