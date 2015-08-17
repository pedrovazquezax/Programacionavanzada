//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punto{
	float x;
	float y;
};

float d(float x1, float y1, float x2, float y2);
float pp(punto u, punto w);
punto v(punto p1, punto p2);

main(){

	punto r1[2], r2[2], v1, v2;
	float pp1;
	int i;

	printf("\nIngrese la recta 1");
	for(i=0;i<2;i++){

		printf("\nIngrese p%d(x,y) : ", i+1);
		scanf("%f,%f", &r1[i].x, &r1[i].y);
	}

	printf("\nIngrese la recta 2");
	for(i=0;i<2;i++){

		printf("\nIngrese p%d(x,y) : ", i+1);
		scanf("%f,%f", &r2[i].x, &r2[i].y);
	}

	printf("\nLa longitud de la recta 1 : %f", d(r1[0].x, r1[0].y, r1[1].x, r1[1].y));
	printf("\nLa longitud de la recta 2 : %f", d(r2[0].x, r2[0].y, r2[1].x, r2[1].y));

	v1=v(r1[0],r1[1]);
	v2=v(r2[0],r2[1]);
	pp1= pp(v1,v2);

	if(pp1==0){
		printf("\nLas rectas son perpendiculares");
	}else
		printf("\nLas rectas son paralelas");






}

float d(float x1, float y1, float x2, float y2){

	float dis;
	dis=(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));

}

punto v(punto p1, punto p2){

	punto vec;
	vec.x=p2.x-p1.x;
	vec.y=p2.y-p1.y;
	return vec;


}

float pp(punto u, punto w){

	float prod;
	prod=(u.x*w.x)+(u.y*w.y);
	return prod;
}


