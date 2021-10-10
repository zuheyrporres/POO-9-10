#include "_persona.cpp"
#include <iostream>
using namespace std;

class cliente : _persona{

  private : string nit;

  publi
  cliente(){
  }
  	cliente(string nombre,string apellido,string direccion,string f,int tel,string n) : _persona(nommre,apellido,direccion,f,tel){ 
  	nit = n;
  }
  
	  void setNit(string n){nit = n;}
	  void setNombres(string nommbre){nombres = nombre;}
	  void setApellidos(string apellido){apellidos = apellido;}
	  void setDireccion(string direccion){direccion = direccion;}
	  void setFn(string f){fn = f;}
	  void setTelefono(int tel){telefono = tel;}
	
	  string getNit(){	return nit;}
	  string getNombres(){	return nombres;}
	  string getApellidos(){	return apellidos;}
	  string getDireccion(){	return direccion;}
	  string getFn(){	return fn;}
	  int getTelefono(){	return telefono;}
  
	void mostrar(){
		cout<<"______________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
	}
};
