#include "persona.cpp"
#include <iostream>
using namespace std;

class estudiante : persona {
	//atributos 
	private : string carnet;
	
	//contructor
	public :
	estudiante(){
	}
		
	estudiante (string nom,string ape,string dir, string fn,int tel,string ca) : persona(nom,ape,dir,fn,tel){
		carnet = ca;
		}
		//metodo
		//set (modificar)
		void setcarnet(string ca){carnet=ca;}
		void setnombres(string nom){nombres=nom;}
		void setapellidos(string ape){apellidos=ape;}
		void setdireccion(string dir){direccion=dir;}
		void setfecha_nacimiento(string fn){fecha_nacimiento=fn;}
		void setelefono(int tel){telefono=tel;}		
		// get mostrar
		 string getcarnet(){return carnet;}
		 string getnombres(){return nombres;}
		 string getapellidos(){return apellidos;}		 
		 string getfecha_nacimiento(){return fecha_nacimiento;}
		 int gettelefono(){return telefono;}
		//metodos
		void mostrar(){
			cout<<carnet<<endl;
			cout<<nombres<<endl;
			cout<<apellidos<<endl;
			cout<<direccion<<endl;
			cout<<telefono<<endl;
			cout<<fecha_nacimiento<<endl;
		}
};
	
