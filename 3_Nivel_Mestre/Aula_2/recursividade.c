#include <stdio.h>



void recursiva(int numero)
{
    if (numero > 0)
    {
        printf("%d ", numero);

        recursiva(numero - 1);
    }
}



int main()
{
    int quantidade = 10;


    
    printf("Contagem regressiva: \n");
    recursiva(quantidade);



    return 0;
}