#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,T[10];
    printf("Entrer le nombre :");
    scanf("%d", &N);
    for(int i = 0 ; i < N ; i++){
        scanf("%d", &T[i]);
    }

    for(int i = 0 ; i < N ; i++){
        for(int j= i + 1 ; j < N ; j++){
            if(T[i] > T[j]){
                int M ;
                M = T[i];
                T[i]=T[j];
                T[j]=M;
            }

        }
    }
    printf("Tableau Trie croissant \n");

    for(int i = 0 ; i < N ; i++){
        printf("%d\n", T[i]);
        }
        for(int i = 0 ; i < N ; i++){
        for(int j= i + 1 ; j < N ; j++){
            if(T[i] < T[j]){
                int M ;
                M = T[i];
                T[i]=T[j];
                T[j]=M;
            }

        }
    }
    printf("Tableau Trie decroissant \n");

    for(int i = 0 ; i < N ; i++){
        printf("%d\n", T[i]);
        }
    return 0;
}
