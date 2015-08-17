#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct rectas{ float x1,x2,y1,y2;};
void main()
{
    struct rectas r1;
    struct rectas r2;
    int i;
    float distancia, perpendicular,vectoru1[2],vectoru2[2];
    printf("\n\tPara la recta 1, ingrea los siguientes valores:\n");
    printf("valor de x1: ");
    scanf("%f",&r1.x1);
    printf("\n\tvalor de x2: ");
    scanf("%f",&r1.x2);
    printf("\n\tvalor de y1: ");
    scanf("%f",&r1.y1);
    printf("\n\tvalor de y2: ");
    scanf("%f",&r1.y2);
    printf("\n\n\tPara la recta 2, ingrea los siguientes valores:\n");
    printf("\n\tvalor de x1: ");
    scanf("%f",&r2.x1);
    printf("\n\tvalor de x2: ");
    scanf("%f",&r2.x2);
    printf("\n\tvalor de y1: ");
    scanf("%f",&r2.y1);
    printf("\n\tvalor de y2: ");
    scanf("%f",&r2.y2);
    distancia = sqrt(((r1.x1+r2.x1)*(r1.x1+r2.x1))+((r1.y1+r2.y1)*(r1.y2+r2.y2)));
    vectoru1[0]= r1.x2-r1.x1;
    vectoru1[1]= r1.y2 -r1.y1;
    vectoru2[0]= r2.x2 - r2.x1;
    vectoru2[1]=r2.y2-r2.y1;
    perpendicular = vectoru1[0]*vectoru2[0] + vectoru1[1]*vectoru2[1];
    if(perpendicular == 0)
        printf("\n\n\tLas rectas son perpendiculares");
    else
        printf("\n\n\tlas rectas no son perpendiculares");
}
