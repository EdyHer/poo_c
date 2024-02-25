#include <iostream>
using namespace std;

class persona{
	//atributos 
	protected : string nombres, apellidos, direccion, fecha_nacimiento; 
				int telefono;
	//contructor
	protected:	
		persona(){
		}
		persona(string nom, string ape, string dir, string fn, int tel){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
		fecha_nacimiento=fn;
		
	}
	
	//metodo 
	void mostrar();
		
};

