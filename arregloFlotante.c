#include <stdio.h>
int main(int argc, char const *argv[])
{
    float numbers[6];
    numbers[0]=2.3;
    numbers[1]=1.68;
    numbers[2]=1.80;
    numbers[3]=1.85;
    numbers[4]=1.75;
    numbers[5]=1.71;

    printf("Elemento #1: %.2f\n", numbers[0]);
    printf("Elemento #2: %.2f\n", numbers[1]);
    printf("Elemento #3: %.2f\n", numbers[2]);
    printf("Elemento #4: %.2f\n", numbers[3]);
    printf("Elemento #5: %.2f\n", numbers[4]);
    printf("Elemento #6: %.2f\n", numbers[5]);

    return 0;
}