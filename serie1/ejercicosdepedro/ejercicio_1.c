//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h> //para printf
#include<stdlib.h>
main(){

       //int **ap **ap1;
       int max1,max2,i,j,m,n;

       printf("\tEl programa busca los elementos mas grandes de 2 matrices y los suma.\n");
       printf("\nDame las columnas: ");
       scanf("%d",&n);
       printf("\nDame los renglones");
       scanf("%d",&m);

       int **A,**B;

        A= (int**)malloc(n*sizeof(int*));
        for( i=0;i<n;i++)
    	A[i]= (int*)malloc(m*sizeof(int));

        B=(int**)malloc(n*sizeof(int*));
        for(i=0;i<n;i++)
    	B[i]=(int*)malloc(m*sizeof(int));

       for (i=0;i<n;i++)
       for (j=0;j<m;j++)
       {
            printf("Dame el valor A[%i][%i]  ",i+1,j+1);
            scanf("%d",&A[i][j]);



       }
       for (i=0;i<n;i++)
       for (j=0;j<m;j++)
       {

            printf("Dame el valor B[%i][%i] ",i+1,j+1);
            scanf("%d",&B[i][j]);

       }


       max1=A[0][0];
       max2=B[0][0];


       for (i=0;i<n;i++)
       for (j=0;j<m;j++)
       {
            if (A[i][j]>max1)
            max1=A[i][j];
       }

       for (i=0;i<n;i++)
       for (j=0;j<m;j++)
       {
            if (B[i][j]>max1)
            max2=B[i][j];
       }

        printf("El valor maximo de la matriz A es: %d y el de la matriz B es: %d \ny la suma de los dos es: %d\n",max1,max2,max1+max2);

        for(i=0;i<m;i++)
        free(A[i]);
        free(A);

        for (i=0;i<m;i++)
        free(B[i]);
        free(B);

        system("PAUSE");

}
