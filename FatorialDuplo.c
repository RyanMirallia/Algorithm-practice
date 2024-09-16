#include <stdio.h>

//calculates the double factorial of a number using recursive function

int fatorialDuplo(int n){
    if(n == 1){
        return 1;
    }
    
    if(n % 2 != 0){
        return n * fatorialDuplo(n - 1);
    }

    else{
        return fatorialDuplo(n - 1);
    }
    
}

int main(){
    int n;
    printf("number: ");
    scanf("%d", &n);

    printf("double factorial: %d", fatorialDuplo(n));

    return 0;
}