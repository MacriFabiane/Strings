/*) Ler uma string de at� 100 caracteres, contar e exibir a quantidade de cada uma das vogais existentes nessa string. Armazenar essas quantidades em um vetor.
� indispens�vel armazenar a quantidade no vetor �medida que a string � percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a 
quantidade de vogais deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte forma:*/

#include <stdio.h>
#include <locale.h>
int main (void) 
{
	setlocale (LC_ALL, "Portuguese");
	char string[101], ch;

do
{
	int vetVogais[5]= {0,0,0,0,0}, i=0; //necess�rio iniciar aqui, pois toda vez que rodar o vet e o i ser�o 0 como no in�cio.
	printf ("Informe um texto com at� 100 caracteres: ");
	setbuf(stdin, NULL);
	gets (string);

	while (string[i] != '\0') 
	{
		if (string[i]=='a'||string[i]=='A') 
		{
			vetVogais[0]++;
		} 
		else if (string[i]=='e'||string[i]=='E')
		{
			vetVogais[1]++;
		} 
		else if (string[i]=='i'||string[i]=='I') 
		{
			vetVogais[2]++;
		} 
		else if (string[i]=='o'||string[i]=='O') 
		{
			vetVogais[3]++;
		}
		else if (string[i]=='u'||string[i]=='U')
		{
			vetVogais[4]++;
		}
		i++;
	}
	
	printf ("VOGAIS\t\tQUANTIDADE\n");
	printf("A/a\t\t%d\n", vetVogais[0]);
	printf("E/e\t\t%d\n", vetVogais[1]);
	printf("I/i\t\t%d\n", vetVogais[2]);
	printf("O/o\t\t%d\n", vetVogais[3]);
	printf("U/u\t\t%d\n", vetVogais[4]);
	
	printf("Deseja repetir o programa? ");
	setbuf(stdin, NULL);
	scanf ("%c", &ch);
	
}while (ch=='S'||ch=='s');
	
    return 0;


}
