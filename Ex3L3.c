/* Criar uma função para concatenar duas strings*/
#include <stdio.h>
int main (void)
{
	int i=0, k=0, j=0;
	char string1[21], string2[21], string3[41];
	
	printf ("Informe a primeira string: ");
	gets (string1);
	printf ("Informe a segunda string: ");
	gets (string2);
	
	while (string1[i]!='\0')
	{
		string3[j]=string1[i];
		j++;
		i++;
	}
	while (string2[k]!='\0')
	{
		string3[j]=string2[k];
		j++;
		k++;
	}
	string3[j]='\0';
	
	printf ("%s", string3);
	
	return 0;
}
