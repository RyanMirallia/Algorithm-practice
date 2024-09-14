#include <stdio.h>

//invert a number using recursive function

int inverteNum(int num, int resultado){
    if(num == 0){
        return resultado;
    }
    return inverteNum(num / 10, resultado * 10 + num % 10);
}

int main() {
    int num;
    
    scanf("%d", &num);

    printf("%d\n", inverteNum(num, 0));

    return 0;
}