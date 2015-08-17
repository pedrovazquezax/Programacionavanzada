//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura
class Proyecto2{
	
	public static void main(String[] args){
		
		int o1,o2;
		Menu m = new Menu();
		EcuacionesAlgebraicas ea= new EcuacionesAlgebraicas();
		SistemasDeEcuacionesLineales sel= new SistemasDeEcuacionesLineales();
		InterpolacionDeFuncionesTabulares ift= new InterpolacionDeFuncionesTabulares();
		
		do{
		o1=m.DespliegaMenu("Bienvenidos\n1.-Ecuaciones algebraicas\n2.-Sistemas de ecuaciones lineales\n3.-Interpolacion de funciones tabulares\n4.-Salir\nOpcion: ",4);
		switch(o1){
			case 1:
				do{
					o2=m.DespliegaMenu("1.-Metodo de Biseccion\n2.-Metodo de Newton Rhapson\n3.-Menu principal\nOpcion: ",3);
				switch(o2){
					case 1:
						ea.Biseccion();
					break;
					
					case 2:
						ea.NewtonRhapson();
					break;

				}
				}while(o2!=3);
			break;
		
			case 2:
				do{
				o2=m.DespliegaMenu("1.-Metodo de Gauss – Jordan\n2.-Metodo de LU\n3.-Menu principal\nOpcion: ",3);
				switch(o2){
					case 1:
					 sel.GaussJordan();
					break;
					
					case 2:					
					sel.LU();
					break;

				}
				}while(o2!=3);
			break;
			
			case 3:
			ift.Interpolacion();
			break;
		}
		}while(o1!=4);
	}
}