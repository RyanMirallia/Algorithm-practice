#include <stdio.h>
#include <math.h>

//checks if a number is prime or composite

int main(){
    int num, root, n, k;
    printf("how many numbers?: ");
    scanf("%d", &n);
    
    for(k = 0; k < n; k++){
        printf("write the number: ");
        scanf("%d", &num);

        root = sqrt(num);

        if(num == 0 || num == 1){
            printf("compositive\n");
            continue;
        }
        if(num == 2 || num == 3){
            printf("prime\n");
            continue;
        }
        if(num % 2 == 0 || num % 3 == 0){
            printf("compositive\n");
            continue;
        }

        int i, primo = 1;

        for(i = 5; i <= root; i = i + 6){
            if(num % i == 0 || num % (i + 2) == 0){
                primo = 0;
                printf("compositive\n");
                break;
            }
        }
        if(primo == 1){
            printf("prime\n");
            continue;
        }
    }

    return 0;
}