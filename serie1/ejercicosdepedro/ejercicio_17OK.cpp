#include <stdio.h>
#include <stdlib.h>

struct trabajador{
	
	char nombre[30];
	char num[10];
	int paga;
	int horas;
	int hextras;
	int hextras3;
	
};

main(){
	
	trabajador t1;
	
	printf("\nIngrese el nombre del trabajador");
	scanf("%s", &t1.nombre);
	printf("\nIngrese el numero de trabajador");
	scanf("%s", &t1.num);
	printf("\nIngrese la paga por hora de %s ", t1.nombre);
	scanf("%d", &t1.paga);
	printf("\nIngrese las horas trabajadas de %s", t1.nombre);
	scanf("%d", &t1.horas);
	
	if(t1.horas>40){
		t1.hextras=t1.horas-40;
		
		if(t1.hextras>8){
			t1.hextras3=t1.hextras*3;	
		}else{
			t1.hextras=t1.hextras*2;
		}
		
	}else{
		t1.hextras=0;
		t1.hextras3=0;
	} 
	
	printf("\nEl trabajador %s con num de empleado %s, Trabajo %d horas y de ellas fueron %d horas extras y %d horas extras triples", t1.nombre,t1.num,t1.horas,t1.hextras,t1.hextras3);
	
}
