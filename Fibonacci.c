#include <stdio.h>

//fibonacci sequence using recursion

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n, i;

    printf("numbers: ");
    scanf("%d", &n);

    if(n == 0){
        printf("0\n");
        return 0;
    }

    else if(n == 1){
        printf("0 1\n");
        return 0;
    }


    for(i = 0; i <= n; i++){
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}