#include <stdio.h>

//Check if the addition or multiplication of two numbers causes overflow or not.

int main(){
    int limite;
    printf("limit: ");
    scanf("%d", &limite);
    char sinal;

    int num1, num2, result;
    printf("number 1: ");
    scanf("%d", &num1);
    getchar();
    printf("operator + or x: ");
    scanf("%c", &sinal);
    printf("number 2: ");
    scanf("%d", &num2);
    getchar();

    printf("\n");

    switch(sinal){
        case '+':
            result = num1 + num2;
            if(result > limite){
                printf("overflow\n");
            }
            else{
                printf("no overflow\n");
            }
        break;

        case 'x':
            result = num1 * num2;
            if(result > limite){
                printf("overflow\n");
            }
            else{
                printf("no overflow\n");
            }
        break;
    }
}