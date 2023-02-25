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
int contarPalavraString (char string[])
{
	int i=0, contPalavra=0;
	if(string[i]!=' ')
	{
		contPalavra++;
 		i++;
	}
	
	while (string[i]!='\0')
	{
		if (string[i]==' ' && string[i-1]!=' ')
		{
			contPalavra++;
		}
		i++;
	}
	return(contPalavra);	
}
void primeiraLetraDeCada (char string[])
{
	int i=0, j=0;
	char string2[21];
	
	if(string[i]!=' ')
	{
		string2[j]=string[i];
		j++;
		i++;
	}
	while (string[i]!='\0')
	{
		if (string[i]!=' ' && string[i-1]==' ')
		{
			string2[j]=string[i];
			j++;
			string2[j]=' ';
			j++;
		}
		i++;
	}
	string2[j]='\0';
	printf ("Primeiro caractere de cada palavra da string: %s\n", string2);
}
void ultimoCaractereDeCada (char string[])
{
	int i=0, j=0;
	char string2[21];
	
	while (string[i]!='\0')
	{
		if (string[i]!=' ' && string[i+1]==' ')
		{
			string2[j]=string[i];
			j++;
		}
		else if (string[i]!=' ' && string[i+1]=='\0')
		{
			string2[j]=string[i];
			j++;
			string2[j]=' ';
			j++;
		}
		i++;
	}
	string2[j]='\0';
	
	printf ("Ultimo caractere de cada palavra da string: %s\n", string2);
	
}
int letras (char string[], int vet, int tam){
	
	while (string[i]!='\0')
	{
		if (string[i]!=' ' && string[i-1]==' ')
		{
			string2[j]=string[i];
			j++;
			string2[j]=' ';
			j++;
		}
		i++;
	}
}
void primeiraPalavra(char string[])
{
	int i=0, j=0;
	char string2[21];
	
    while  (string[i]==' ')
	{
	   i++;	
	}
	while (string[i]!=' '&& string[i]!='\0')
	{
		string2[j]=string[i];
		j++;
		i++;
	}
	string2[j]='\0';
	
	printf ("Primeira palavra da string: %s\n", string2);
}
