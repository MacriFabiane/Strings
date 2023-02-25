//Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres alfabéticos e de 
//dígitos numéricos existentes em um texto de até 100 caracteres fornecido pelo usuário
#include <stdio.h>
int main (void)
{
	int i=0, contAlfM=0, contNum=0, k, contAlfm=0, ant, cont=0;
	char string[101], ch;
	do
	{
		cont=0;
		contAlfm=0;
		contNum=0;
		contAlfM=0;
		i=0;
		printf ("Informe um texto: ");
		setbuf(stdin, NULL);
		gets(string);
		
		while (string[i]!='\0')
		{
			
			if(string[i]>=65 && string[i]<=90)
			{
				contAlfM++;
			}
			else if (string[i]>=97 && string[i]<=122)
			{
				contAlfm++;
			}
			else if(string[i]>=48 && string[i]<=57)
			{
				contNum++;
			}
			
			
			i++;
		}
		printf ("Existem %d caracteres alfabeticos\n", contAlfM+contAlfm);
		printf ("Existem %d digitos numericos no texto", contNum);
		
		
		
		printf ("\nDeseja repetir o programa? ");
		setbuf (stdin, NULL);
		scanf ("%c", & ch);
	}while (ch=='S'||ch=='s');
	return 0;
}
