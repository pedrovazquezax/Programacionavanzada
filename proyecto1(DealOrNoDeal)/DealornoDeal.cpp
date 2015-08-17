#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#define TAM 26

int menu();
void registro();
void consulta();
void jugar();
int buscarNumero (int numero, int arreglo[],int tam);
int banca(int numeros[]);
main(){
    int opcion;
    do{
        opcion=menu();
        switch(opcion){
            case 1://jugar

                jugar();
        break;
            case 2:
        registro();

        break;
            case 3://consultar
            consulta();
        break;
        }


    }while(opcion!=4);
}

int menu(){
	int op;
	do{
    printf("\t\n BIENVENIDOS A DEAL OR NO DEAL");
    printf("\t\n Por favor elige una de las siguientes opciones \n\n");
    printf("\n 1-JUGAR");
    printf("\n 2-Registrarse");
    printf("\n 3-Consultar");
    printf("\n 4-Salir");
    printf("\n Cual es tu eleccion: ");
 	scanf("%d",&op);
 	system("cls");

	if(op<1||op>4)
	{
		printf("opcion no valida\n\n");
	}
	}while(op<1||op>4);

	return op;
}

void registro(){
                char nom[30];
                int jj=0;
                float dg=0;
                printf("\nDame tu nombre ");
               fflush(stdin);
               gets(nom);
                FILE *F;
               F=fopen("juego.xls","a+");
               if(F==NULL)
               printf("ERROR FATAL DE LINUX");

               else{
               fprintf(F,"\n%s\t%d\t%f",nom,jj,dg);
               }
                    fclose(F);
}

void consulta(){

FILE *F;
            char s[30],s1[30];
            int jj,i,n=100;
            float dg;

            F=fopen("juego.xls","r");
            if(F==NULL)
            printf("ERROR FATAL DE LINUX");

            else{
                printf("Usuario que deseas consultar:\n");
                fflush(stdin);
                gets(s);
                for(i=0;i<n;i++){
                                 fscanf(F,"%s",&s1);
                                 if(strcmp(s,s1)==0){
                                                        fscanf(F,"\t%d",&jj);
                                                        fscanf(F,"\t%f",&dg);
                                                        printf("%s tiene %d juegos jugados y %f dinero\n",s1,jj,dg);
                                                    }
                                else{
                                printf("no se encuentra el usuario\n");
                                }
                                }

        }
        fclose(F);
}

void jugar(){
    char nombre [30];
    int mal,malel;
    int A[9]={6,5,4,3,2,1,1,1,1};
    int C[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int B[26]={1,2, 5, 10, 25, 50, 75, 100, 200, 300, 400, 500, 750, 1000, 5000, 10000, 25000, 50000, 75000, 100000, 200000, 300000, 400000, 500000, 750000, 1000000};
    int min=0, max=25;
    int num_aleatorio;
    int numeros [TAM]={-1};
    int fstop;
    int i,j;
    int suma=0;
    printf("\nIngresa tu nombre... ");
               fflush(stdin);
               gets(nombre);
    system("cls");


            srand(time(NULL));

            for(i=0;i<TAM;i++){
                do{
                    num_aleatorio=min+rand()%(max-min+1);
                    fstop=buscarNumero(B[num_aleatorio],numeros,TAM);
                }while (fstop);

                numeros[i]=B[num_aleatorio];

            }

    printf("[%i]    [%i]    [%i]    [%i]    [%i]    [%i]    [%i]\n",C[19],C[20],C[21],C[22],C[23],C[24],C[25]);
            printf("    [%i]    [%i]    [%i]    [%i]    [%i]    [%i]\n",C[13],C[14],C[15],C[16],C[17],C[18]);
            printf("[ %i]    [ %i]    [ %i]    [%i]    [%i]    [%i]    [%i]\n",C[6],C[7],C[8],C[9],C[10],C[11],C[12]);
            printf("    [ %i]    [ %i]    [ %i]    [ %i]    [ %i]    [ %i]\n",C[0],C[1],C[2],C[3],C[4],C[5]);
    printf("Elije tu maletin \n");
    scanf("%i",&malel);
    C[malel-1]=0;


    for(j=0;j<9;j++){

            printf("escoje %i maletines \n",A[j]);
        for(i=0;i<A[j];i++){
         printf("[%i]    [%i]    [%i]    [%i]    [%i]    [%i]    [%i]\n",C[19],C[20],C[21],C[22],C[23],C[24],C[25]);
            printf("    [%i]    [%i]    [%i]    [%i]    [%i]    [%i]\n",C[13],C[14],C[15],C[16],C[17],C[18]);
            printf("[ %i]    [ %i]    [ %i]    [%i]    [%i]    [%i]    [%i]\n",C[6],C[7],C[8],C[9],C[10],C[11],C[12]);
            printf("    [ %i]    [ %i]    [ %i]    [ %i]    [ %i]    [ %i]\n",C[0],C[1],C[2],C[3],C[4],C[5]);
        printf("maletin  ");
        scanf("%i",&mal);
        if (numeros[mal]==0||mal==malel){
            printf("maletin incorrecto\n\n");
            i--;
        }
        else {
        printf("el tenia %i\n",numeros[mal-1]);
        numeros[mal-1]=0;
        C[mal-1]=0;
        }
        }
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

int banca(int numeros[]){
         int suma,j;
         for(j=0;j<TAM;j++){
            suma=suma+numeros[j];
        }
        suma=suma/26;
        printf("oferta= %d",suma);
}
