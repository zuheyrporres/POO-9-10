#include "_persona.cpp"
#include <iostream>

using namespace std;

class empleados : _persona{
	
	private : int codigo_empleados;
	string puesto;
	
	public :
	empleados(){
	}				
	empleados(string nommbre,string apellido,string direccion,string f,int tel,int codigo,string puesto) : _persona(nombre,apellido,direccion,f,tel){	
	codigo_empleados = codigo;
	puesto = p;
	}
	
	void setCodigo_empleados(int cod){codigo_empleados = codigo;}
	void setPuesto(string p){puesto = puesto;}
	void setNombres(string nommbre){nombres = nombre;}
	void setApellidos(string apellido){apellidos = apellido;}
	void setDireccion(string direccion){direccion = direccion;}
	void setFn(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	int getCodigo_empleados(){	return codigo_empleados;}
	string getPuesto(){	return puesto;}
    string getNombres(){	return nombres;}
    string getApellidos(){	return apellidos;}
    string getDireccion(){	return direccion;}
    string getFn(){	return fn;}
    int getTelefono(){	return telefono;}
    
    void mostrar(){
	cout<<"______________________"<<endl;
	cout<<codigo_empleados<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
	}
};

