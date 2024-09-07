#include <stdio.h>

//Which number is greater when read backwards?
//!3 digits!

int main(){
    int num1, num2, aux1, aux2, aux3, aux4;
    printf("First Number(3 digits): ");
    scanf("%d", &num1);
    printf("Second Number(3 digits): ");
    scanf("%d", &num2);

    int result, result2;

    aux1 = num1 % 10;
    aux2 = num1 / 10;
    aux3 = aux2 % 10;
    aux4 = aux2 /10;

    result = (aux1 * 100) + (aux3 * 10) + (aux4 * 1);

    aux1 = num2 % 10;
    aux2 = num2 / 10;
    aux3 = aux2 % 10;
    aux4 = aux2 /10;

    result2 = (aux1 * 100) + (aux3 * 10) + (aux4 * 1);

    if(result > result2){
        printf("The first number is greater when read backwards: %d\n", result);
    }
    else{
        printf("The second number is greater when read backwards: %d\n", result2);
    }

    return 0;
}