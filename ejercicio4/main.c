#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int positivos = 0;
    int negativos = 0;
    int i=0;


   while(i<10){


        printf("ingresa un numero:");
        scanf("%d",&a);


   if(a>0){

        positivos=positivos+1;

        }

    if(a<0){


        negativos=negativos+1;

    }
        i=i+1;

   }


        printf("\n--------------------------------");
        printf("\nlos positivos son: %d",positivos);
        printf("\n--------------------------------");
        printf("\nlos negativos son: %d",negativos);



    return 0 ;
}
