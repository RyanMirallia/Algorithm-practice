#include <stdio.h>

//Check if a number is a palindrome (4 digits)

int main(){
    int n, i, num, aux1, aux2, aux3, aux4, comp;
    printf("How many numbers?: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++){
        printf("number %d (4 digits): ", i);
        scanf("%d", &num);
                          //4884
        aux1 = num / 100; //48
        aux2 = num % 100; //84
        aux3 = aux2 / 10; //8
        aux4 = aux2 % 10; //4
        comp = (aux4 * 10) + (aux3 * 1);

        if(aux1 == comp){
            printf("is a palindrome\n");
        }
        else{
            printf("isnt a palindrome\n");
        }
    }

    return 0;
}