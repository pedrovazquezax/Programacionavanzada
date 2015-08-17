#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int n,i;
	float *a;
    float x=0,y=0;
    
    printf("\n\tIngresa de que grado es tu polinomio: \t");
    scanf("%d",&n);
    a=(float*)malloc((n+1)*sizeof(float));
    for(i=0;i<n+1;i++)
	{
    	printf("\n\t Ingresa el coeficiente x^%d\t",i);
    	scanf("%f",&a[i]);
    }
    printf("\n");
	for(i=0;i<n+1;i++)
       printf("%.2fX^%d + ",a[i],i);
	
	printf("\n\tPara que x: \t");
    scanf("%f",&x);
	   
	for(i=0;i<n+1;i++)
       y+=a[i]*pow(x,i);   
	   
	printf("\n\tx: %f",y);  
	printf("\n");
    system("PAUSE");       
}
