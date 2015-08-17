#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 26
int buscarNumero(int numero, int arreglo[],int tam);
main(int argc, char** argv){

    int min=1, max=26;
    int num_aleatorio;
    int numeros [TAM]={-1};
    int fstop;
    int i,j;
    printf("\t\tNumeros aleatorios NO REPETIDOS\n\n");
    srand(time(NULL));

    for(i=0;i<TAM;i++){
        do{
            num_aleatorio=min+rand()%(max-min+1);
            fstop=buscarNumero(num_aleatorio,numeros,TAM);
        }while (fstop);

        numeros[i]=num_aleatorio;

    }
    for(j=0;j<TAM;j++){
        printf("%i.-[%i]\n",j+1,numeros[j]);
    }
}

int buscarNumero (int numero, int arreglo[],int tam){
    int i, stop=0;

    for (i=0;(i<tam && stop==0); i++){

        if(arreglo[i]==numero)
            stop=1;
    }
    return stop;
}
