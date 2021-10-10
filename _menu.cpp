#include "empleados.cpp"
#include "cliente.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;
main(){
	
	int op;
	while(op !=3)
	{
		cout<<"1. Ingrese a un Cliente"<<endl;
		cout<<"2. Ingrese a un Empleado"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>op;
		
		switch(op){
			
			case 1:
				system("cls");
				string nit,nombres,apellidos,direccion,fn;
					int telefono;
					cout<<"Ingrese Nit: ";
					cin>>nit;
					cout<<"Ingrese Nombres: ";
					cin>>nombres;
					cout<<"Ingrese Apellidos: ";
					cin>>apellidos;
					cout<<"Ingrese Direccion: ";
					cin>>direccion;
					cout<<"Ingrese Fecha de nacimiento: ";
					cin>>fn;
					cout<<"Ingrese Telefono: ";
					cin>>telefono;
					
					Cliente obj = cliente(nombres,apellidos,direccion,fn,telefono,nit);
					obj.mostrar();
					cout<<"Ingrese Nit: ";
					cin>>nit;
					obj.setNit(nit);
					obj.setNombres(nombres);
					obj.setApellidos(apellidos);
					obj.setDireccion(direccion);
					obj.setFn(fn);
					obj.setTelefono(telefono);
					obj.mostrar();
				
					cout<<"Nit: "<<obj.getNit()<<endl;
					cout<<"Nombres: "<<obj.getNombres()<<endl;
					cout<<"Apellidos: "<<obj.getApellidos()<<endl;
					cout<<"Direccion: "<<obj.getDireccion()<<endl;
					cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
					cout<<"Telefono: "<<obj.getTelefono()<<endl;
					system("pause");
					system("cls");
			break;
			
			case 2:
				system("cls");
				string nombres,apellidos,direccion,fn,puesto;
					int telefono,codigo_empleados;
					cout<<"Ingrese el Codigo: ";
					cin>>codigo_empleado;
					cout<<"Ingrese Puesto: ";
					cin>>puesto;
					cout<<"Ingrese Nombres: ";
					cin>>nombres;
					cout<<"Ingrese Apellidos: ";
					cin>>apellidos;
					cout<<"Ingrese Direccion: ";
					cin>>direccion;
					cout<<"Ingrese Fecha de nacimiento: ";
					cin>>fn;
					cout<<"Ingrese Telefono: ";
					cin>>telefono;
					
					empleados obj = empleados(nombres,apellidos,direccion,fn,telefono,codigo_empleados,puesto);
					obj.mostrar();
					cout<<"Ingrese el Codigo de empleado: ";
					cin>>codigo_empleados;
					obj.setCodigo_empleados(codigo_empleados);
					obj.setPuesto(puesto);
					obj.setNombres(nombres);
					obj.setApellidos(apellidos);
					obj.setDireccion(direccion);
					obj.setFn(fn);
					obj.setTelefono(telefono);
					obj.mostrar();
				
					cout<<"Codigo: "<<obj.getCodigo_empleados()<<endl;
					cout<<"Puesto: "<<obj.getPuesto()<<endl;
					cout<<"Nombres: "<<obj.getNombres()<<endl;
					cout<<"Apellidos: "<<obj.getApellidos()<<endl;
					cout<<"Direccion: "<<obj.getDireccion()<<endl;
					cout<<"Fecha de nacimiento: "<<obj.getFn()<<endl;
					cout<<"Telefono: "<<obj.getTelefono()<<endl;
					system("pause");
					system("cls");
			break;
		}
	
	}
}
