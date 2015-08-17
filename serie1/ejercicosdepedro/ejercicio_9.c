//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x);
main(){
       float a,b,xm,tol;
       int i=1;

       FILE *ap,*ap2;

      ap=fopen("biseccion.txt","r");
     ap2=fopen("biseccionr.txt","w");
      fscanf(ap,"%f:%f:%f",&tol,&a,&b);

       do{
       xm=(a+b)/2;
       if(f(a)*f(xm)<0)
       b=xm;
       else
       a=xm;
       fprintf(ap2,"\nla interacion  %i\n xm=%.2f\n a=%.2f\n b=%.2f",i,xm,a,b);
       i++;
       }while(fabs(a-b)>tol);

       fprintf(ap2,"\nLa raiz es %f\n",xm);
       printf("resultado impreso en archivo\n");
       system("PAUSE");
       }

float f(float x){
      return pow(x,10)-1;
      }
