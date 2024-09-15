#include <stdio.h>

//decimal to binary converter using recursion

int convert_bin(int num){
    if(num == 0){
        return 0;
    }
    else{
        return (num % 2) + 10 * convert_bin(num/2);
    }
}

int main(){
    int num, n;
    printf("How many numbers: ");
    scanf("%d", &n);

    while (n != 0){
        printf("number: ");
        scanf("%d", &num);
        
        printf("%d\n", convert_bin(num));
        n--;
    }

    return 0;
}