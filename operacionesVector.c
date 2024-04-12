#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];

    numbers[0]=3;
    numbers[1]=5;
    numbers[2]=4;
    numbers[3]=8;
    numbers[4]=9;


    printf("Elmento #1: %d\n", numbers[0]);
    printf("Elmento #2: %d\n", numbers[1]);
    printf("Elmento #3: %d\n", numbers[2]);
    printf("Elmento #4: %d\n", numbers[3]);
    printf("Elmento #5: %d\n", numbers[4]);
  

    printf("Suma\n");

    int suma=numbers[0] + numbers[1] + numbers[2] + numbers[3] +numbers[4] + numbers[5];

    printf("La suma es: %d\n", suma);
    return 0;
}
