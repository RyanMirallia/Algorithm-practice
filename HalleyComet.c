#include <stdio.h>

/*The program generates an estimate of when Halley's Comet will be visible again from 
Earth based on the current year, knowing that it orbits the Sun approximately every 76 years.*/

int main(){
    int ano_atual, ano_base = 1986, i;
    printf("Current year: ");
    scanf("%d", &ano_atual);
    i = ano_base;

    if(ano_atual < ano_base){
        while(i > ano_atual){
            i -= 76;
        }
        i += 76;
    }
    else{

        while(i < ano_atual){
            i += 76;

        }

    }

    printf("Halley's Comet will be visible again on Earth in: %d\n", i);
    
    return 0;
}