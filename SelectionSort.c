#include <stdio.h>

void selectionSort(int *vet, int n){
    int aux;
    
    for(int i = 0; i < n; i++){
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        if(vet[i] != vet[min]){
            aux = vet[min];
            vet[min] = vet[i];
            vet[i] = aux;                
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d", vet[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    selectionSort(vet, n);
    
}