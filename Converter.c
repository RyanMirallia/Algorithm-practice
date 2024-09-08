#include <stdio.h>

//converts decimal integers into their base 4 representation, 
//the digits 0, 1, 2, 3 are mapped to the characters 'A', 'C', 'G', and 'T', respectively. 

int main(){
    int n, i, j;
    char letras[] = {'A', 'C', 'G', 'T'};
    printf("enter the number of integers to convert: ");
    scanf("%d", &n);

    char result[10];

    for(i = 0; i < n; i++){
        int b = 0;
        int num;
        printf("number %d: ", i + 1);
        scanf("%d", &num);

        if(num == 0){
            printf("A\n");
        }

        while(num > 0){
            result[b++] = letras[num % 4];
            num = num / 4;
        }

        printf("base 4 representation: ");
        for(j = b - 1; j >= 0; j--){
            printf("%c", result[j]);
        }
        printf("\n");
    }
    return 0;
}