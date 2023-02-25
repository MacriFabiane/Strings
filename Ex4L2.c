/*Fazer funções para:a) Contar as palavras de uma string.b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o último caractere de cada palavra de uma string.Usando as funções criadas, elabore um programa que receba uma string
de até 100 caracteres e forneça a quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e 
mostre o último caractere de cada palavra da string. O programa também deverá copiar a primeira palavra da string para uma outra string e imprimi-la*/
#include <stdio.h>
#include "Strings.h"
int main (void)
{

	char ch;
	char string[101];
	do
	{
		printf ("Informe uma string de ate 100 caracteres: ");
		setbuf (stdin, NULL);
		gets (string);
		
		printf ("A string (%s) contem %d palavras\n", string, contarPalavraString(string));
		primeiraLetraDeCada(string);
		ultimoCaractereDeCada(string);
		primeiraPalavra(string);
		
		
		printf ("\nDeseja repetir o programa? (S/s) ");
		setbuf(stdin,NULL);
		scanf("%c", & ch);
	}while (ch=='s'||ch=='S');
	return 0;
}
