#include <iostream>
using namespace std;
class _persona{

	protected : string nombres,apellidos,direccion, fn;
				int telefono;

	protected : 
		_persona(){
		}
		_persona(string nombre,string apellido,string dirreccion,string f,int tel){
			nombres = nombre;
			apellidos = apellido;
			direccion = direccion;
			fn = f;
			telefono = tel;
		}
	
	void mostrar();
	
