#include <stdio.h>

//This program calculates the maximum number of valid envelopes (User) can send in a promotion,
//based on the labels of different types of "elements" he has collected.
//In short, the program finds the element that appears the least often.

int main(){
    int vet_tam, i, j, count, aux = 100, result = 0;
    printf("number of elements (1 to 1000): ");
    scanf("%d", &vet_tam);

    while(vet_tam >= 1 && vet_tam <= 1000){
        int types;
        printf("number of types: ");
        scanf("%d", &types);

        int lista[vet_tam - 1];

        for(i = 0; i < vet_tam; i++){
            printf("element %d: ", i + 1);
            scanf("%d", &lista[i]);
        }

        for(i = 1; i <= types; i++){
            count = 0;
            for(j = 0; j < vet_tam; j++){
                if(i == lista[j]){
                    count++;
                }
            }
            if(count < aux){
                result = count;
                aux = count;
            }
            
        }
        printf("valid envelope number: %d\n", result);
        break;
    }
}