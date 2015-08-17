//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>

void main()
{
      FILE *ap;
      int b50=0, b20=0, m10=0, m5=0, m2=0, m1=0, m5c=0;
      float camb;
      ap=fopen("cambio.txt","r");
      float impo,cam,din;
      fscanf(ap,"%f\t%f",&din, &impo);
      cam=din-impo;
      camb=cam;
      do{
      	if(cam>=50){
      		b50++;
      		cam-=50;
      		
      	}else{
      		if(cam>=20){
      			b20++;
      			cam-=20;
      		}else{
      			if(cam>=10){
      				m10++;
      				cam-=10;
      			}else{
      				if(cam>=5){
      					m5++;
      					cam-=5;
      				}else{
      					if(cam>=2){
      						m2++;
      						cam-=2;
      					}else{
      						if(cam>=1){
      							m1++;
      							cam-=1;
      						}else{
      							if(cam>=0.5){
      								m5c++;
      								cam-=0.5;
      							}
      						}
      					}
      				}
      			}
      		}
      	}
      	
      }while(cam>0);
      
      printf("\n\n\tEl cambio de %.2f - %.2f es : %.2f\n",din, impo, camb);
      printf("En %d billetes de 50, %d de 20, %d de $10,\n %d de $5, %d de $2, %d de $1, %d de $0.50", b50,b20,m10,m5,m2,m1,m5c);
      printf("\n\n\t");
      system("pause");
}
