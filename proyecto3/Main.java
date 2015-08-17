//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura
class Main{
	
	public static void main(String[] args){
		int o1;
		Metodos met= new Metodos();
		Menu m= new Menu();
		do{
		o1=m.DespliegaMenu("Bienvenidos\n1.-Biseccion\n2.-Newton Rhapson\n3.-Gauss Jordan\n4.-Lagrange\n5.-Salir\nOpcion: ",5);
			switch(o1){
				case 1:
				met.Biseccion();
				break;

				case 2:
				met.NewtonRhapson();
				break;
				
				case 3:
				met.Gauss();
				break;
				
				case 4:
				met.Lagrange();
				
				break;
			}
		}while(o1!=5);

	}
}