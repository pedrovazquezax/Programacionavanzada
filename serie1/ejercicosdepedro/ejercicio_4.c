//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>
void intercalar(int *x, int *y);
main(){
       int n,i;
       int *v1,*v2,*v3;
       printf("Este programa recibe 2 vectores y crea un tercero intercalando sus valores\n");
       printf("\nDame la dimension de los vectores ");
       scanf("%d",&n);
       v1=(int*)malloc(n*sizeof(int));
       v2=(int*)malloc(n*sizeof(int));

        for(i=0;i<n;i++){
            printf("Dame el elemento %i del vector 1:  ",i);
            scanf("%d",&v1[i]);
        }
        for(i=0;i<n;i++){
            printf("Dame el elemento %i del vector 2;  ",i);
            scanf("%d",&v2[i]);
        }
        printf("El vector 1 es (");
        for(i=0;i<n;i++){
            printf("%i,",v1[i]);

        }
        printf(")\n");

        printf("El vector 2 es (");
        for(i=0;i<n;i++){
            printf("%i,",v2[i]);

        }
        printf(")\n");

        printf("El vector resultante  es (");
        for(i=0;i<n;i++){
        intercalar(&v1[i],&v2[i]);
        printf(",");
         }
        printf(")\n");
}

void intercalar(int *x, int *y){
    printf("%i,%i",*x,*y);
}
