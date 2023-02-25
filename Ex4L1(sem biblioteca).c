/*Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a 
mesma representa um palíndromo ou não, usando a função que compara strings.*/
#include <stdio.h>
int verSeStringsIguais (char string1[], char string2[])
{
	int  k, i=0, j=0;
	while (string1[i]!='\0'&&string2[i]!='\0')
	{
		if (string1[i]==string2[i])
		{
			i++;
			
		}
		else 
		{
			j++;
			break;
		}
	}
	if (j!=0)
	{
		return 0;
	}
	else if(j==0)	
	{
		return 1;
	}
}

int main (void)
{
	int i=0, j=0, k;
	char ch, string[21]={0,}, stringinv[21]={0,};
	do
	{
		i=0;
		j=0;
		printf ("Informe uma palvra: ");
		setbuf(stdin, NULL);
		gets (string);
		
		while (string[i]!='\0')
		{
			i++;
			
		}
		i--;
		while(i>=0)
		{
			stringinv[j]=string[i];
			j++;
			i--;
		}
		stringinv[j]='\0';
		
		printf("Inverso da palavra: %s\n", stringinv);
		k=verSeStringsIguais(string, stringinv);
		if (k==1)
		{
			printf("Eh palindromo\n");
		}
	    else
	    {
	    	printf ("Nao eh palindromo\n");
		}

		
		
		
		printf ("\nDeseja repetir o programa? ");
		setbuf(stdin, NULL);
		scanf("%c", &ch);
	}while (ch=='s'||ch=='S');
	
	return 0;
}
