#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 26
int buscarNumero(int numero, int arreglo[],int tam);
main(){

    int B[26]={1,2, 5, 10, 25, 50, 75, 100, 200, 300, 400, 500, 750, 1000, 5000, 10000, 25000, 50000, 75000, 100000, 200000, 300000, 400000, 500000, 750000, 1000000};
    int min=0, max=25;
    int num_aleatorio;
    int numeros [TAM]={-1};
    int fstop;
    int i,j;
    int suma=0;
    printf("\t\tNumeros aleatorios NO REPETIDOS\n\n");
    srand(time(NULL));

    for(i=0;i<TAM;i++){
        do{
            num_aleatorio=min+rand()%(max-min+1);
            fstop=buscarNumero(B[num_aleatorio],numeros,TAM);
        }while (fstop);

        numeros[i]=B[num_aleatorio];

    }
    for(j=0;j<TAM;j++){
        printf("%i.-[%i]\n",j+1,numeros[j]);
    }

    //modificacion
    int A[9]={6,5,4,3,2,1,1,1,1};
    for(j=0;j<9;j++){
            printf("escoje %i maletines",A[j]);
        for(i=0;i<A[j];i++){
        int mal;
        printf("maletin  ");
        scanf("%i",&mal);
        printf("el tenia %i\n",numeros[mal-1]);
        numeros[mal-1]=0;
        }
    }
            for(j=0;j<TAM;j++){
            printf("%i.-[%i]\n",j+1,numeros[j]);
        }
           //bANCA
            for(j=0;j<TAM;j++){
            suma=suma+numeros[j];
        }
        suma=suma/26;
        printf("oferta= %d",suma);


}

int buscarNumero (int numero, int arreglo[],int tam){
    int i, stop=0;

    for (i=0;(i<tam && stop==0); i++){

        if(arreglo[i]==numero)
            stop=1;
    }
    return stop;
}
