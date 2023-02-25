/*) Ler uma string e contar quantos espa�os sucessivos ela cont�m. Armazenar esses valores em um vetor.
Mostrar esse vetor.*/
#include <stdio.h>

void showVetor (int vet[], int tam)
{
    int i=0;
    for (i=0; i<tam; i++)
    {
        printf("%d\t", vet[i]);
    }
}
int main (void)
{

    char ch, string[51];
    int vetor[50], i, k, cont, j;//coloca na �rea de declara��o de mem�ria

    do
    {
        i=0;
        k=0;
        cont=0; //inicializa cont
        printf ("Informe um texto: ");
        setbuf(stdin, NULL);
        gets(string);

        while (string[i]!='\0')
        {

            if (string[i]==' ')
            {
                cont++;
            }
            else if(cont != 0)
            {
                vetor[k] = cont;
                k++;
                cont=0;
            }
            i++;
        }

        if(cont != 0)//se a string terminou com espa�os, ent�o � necess�rio armazenar a quantidade no vetor
        {
            vetor[k] = cont;
            k++;
        }

        printf("\n===Vetor===\n");
        showVetor(vetor, k);




        printf("\nDeseja repetir o programa? ");
        setbuf(stdin, NULL);
        scanf("%c", &ch);

    }
    while(ch=='s'|| ch=='S');
    return 0;
}

