/* Ler um texto com até 50 caracteres e imprimir o texto na vertical com uma palavra por linha*/
#include <stdio.h>
#include <locale.h>
int main (void)
{
	int  i;
	char string[51], ch;
	setlocale (LC_ALL, "Portuguese");
	
	do
	{
		printf ("Escreva um texto com até 50 caracteres: ");
		setbuf (stdin, NULL);
		gets(string);
		
		i=0;
		printf ("\n===TEXTO NA VERTICAL===\n");
		while (string[i]!= '\0')
		{

	    	if (string[i]!= ' ')
	    	{
	    		printf ("%c", string[i]);
			}
			else 
			{
				if (string[i]==' ' && string[i+1] == ' ' && string[i+2] ==' ')
				{
					i++;
				}
				else if (string[i]==' ' && string[i+1] ==' ' && string[i+1]!=' ')
				{
					printf("\n");
				}
				else if (string [i]==' ' && string[i+1]!=' ')
				{
					printf ("\n");
				}
				
			}
		
	    	i++;
	    }
		
		
		printf ("\nDeseja repetir o código? ");
		setbuf (stdin, NULL);
		scanf("%c", &ch);
	} while (ch=='s'||ch=='S');
}



