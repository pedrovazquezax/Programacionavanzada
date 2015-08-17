//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura

class Helper{
	
	Helper(){

	}
	public void ValidaDf(double df)throws CustomException{
		if(df==0.0){

			throw new CustomException("La derivada de la funcion  vale 0");
		}
	}
}