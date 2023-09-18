#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Tableau[10];
    int  i;
    for(i=0 ; i <=10 ; i+=1){

        printf("Entrer le nombre le tableau Tableau[%d] : ", i);
        scanf("%d", &Tableau[i]);
}
        int Min = Tableau[0];
        int Max = Tableau[0];


    for(i= 1 ; i<=10 ; i++){

        if(Min > Tableau[i]){
            Min = Tableau[i];
        }
        else if(Max<Tableau[i]){
            Max = Tableau[i];
        }
        }
        printf("le Minimum est : %d \n", Min);
        printf("le Maximum est : %d", Max);

    return 0;
}
