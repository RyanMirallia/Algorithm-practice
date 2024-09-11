#include <stdio.h>

//contador com funcao recursiva

int conta(int limit, int inicio){
    
    if(inicio == limit){
        printf("%d\n", limit);
        return 0;
    }
    else{
        printf("%d\n", inicio);

        return inicio + conta(limit, inicio + 1);
    }
}

int main(){
    int limit, inicio = 1;
    printf("digite um numero: ");
    scanf("%d", &limit);
    
    conta(limit, inicio);
    
    return 0;
}