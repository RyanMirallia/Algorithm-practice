#include <stdio.h>

/*This program simulates the effect of frogs jumping on stones. It reads the number 
of stones and frogs, then processes each frog's initial position and jump distance to determine 
which stones are marked as 'visited' by any frog. Finally, it outputs the status of each stone, 
indicating whether it was reached by any frog.*/

int main(){
    int num_pedras, num_sapos, distancia_pulo, posicao_inicial;
    int para_frente, para_tras;
    int i, j, k;
    
    printf("number of stones: ");
    scanf("%d", &num_pedras);

    printf("number of frogs: ");
    scanf("%d", &num_sapos);

    int pedras_final[num_pedras];

    for(i = 0; i < num_pedras; i++){
        pedras_final[i] = 0;
    }

    printf("initial position and jump distance for each frog: ");
    for(k = 0; k < num_sapos; k++){
        
        scanf("%d", &posicao_inicial);
        scanf("%d", &distancia_pulo);

        posicao_inicial--;
        

        for(j = 0; j < num_pedras; j++){
            
            if(posicao_inicial == j){
                para_frente = j + distancia_pulo;
                para_tras = j - distancia_pulo;
                pedras_final[j] = 1;
                while(para_frente < num_pedras){
                    pedras_final[para_frente] = 1;
                    para_frente = para_frente + distancia_pulo;
                }
                
                while(para_tras >= 0){
                    pedras_final[para_tras] = 1;
                    para_tras = para_tras - distancia_pulo;
                }
            }
        }
    }

    printf("final status of stone: ");
    for(i = 0; i < num_pedras; i++){
        printf("%d", pedras_final[i]);
    }

    return 0;
}