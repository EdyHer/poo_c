#include "estudiante.cpp"
#include <iostream>
using namespace std;
main(){
	//instancia de un objeto
	string carnet,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"ingrese carnet:";
	cin>>carnet;
	cout<<"ingrese nombres:";
	cin>>nombres;
	cout<<"ingrese apellidos:";
	cin>>apellidos;
	cout<<"ingrese direccion:";
	cin>>direccion;
	cout<<"ingrese fecha_nacimiento:";
	cin>>fecha_nacimiento;
	cout<<"ingrese telefono:";
	cin>>telefono;
	
	estudiante obj = estudiante(nombres,apellidos,direccion,fecha_nacimiento,telefono,carnet);
	obj.mostrar();
}

