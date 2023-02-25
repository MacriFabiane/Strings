/*Ler um texto de até 50 caracteres, copiar para um vetor somente a primeira palavra. Mostrar a string 
armazenada.*/
#include <stdio.h>
int main (void)
{
	char ch;
	do
	{
		int i=0;
		char string[51], string2[51]={0,};
		
		printf ("Informe um texto: ");
		setbuf(stdin, NULL);
		gets(string);
		
		i=0;
		
		while (string[i]!= '\0')
		{
			
			if (string[i]!=' ' )
			{
				string2[i]=string[i];
			}
			else if (string[i]==' ' && string[i-1]!=' ')
			{
				break;
			}
			
			i++;
		}
		string2[i]=='\0';
		
		printf ("A string copiada eh: %s", string2);
		
		
		
		
		printf ("\nDeseja repetir o programa? ");
		setbuf (stdin, NULL);
		scanf ("%c",& ch );
		
		
	}while (ch=='s'||ch=='S');
	
	return 0;
}
