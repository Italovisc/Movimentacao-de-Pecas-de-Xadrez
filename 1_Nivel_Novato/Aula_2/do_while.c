#include <stdio.h>



int main() {
    int i = 1;



    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);



    printf("Valor final de i = %d\n", i);



    return 0;
}