#include "clientes.cpp"
#include <iostream>
using namespace std;
main ()
{
	string nit,nombre,apellido,direccion,fechan;
	int telefono;
	cout << "Ingrese Nit: ";
	cin >> nit;
	cout << "Ingrese Nombres: ";
	cin >> nombre;
	cout << "Ingrese Apellidos: ";
	cin >> apellido;
	cout << "Ingrese Direccion: ";
	cin >> direccion;
	cout << "Ingrese Telefono: ";
	cin >> telefono;
	cout << "Ingrese Fecha nacimiento: ";
	cin >> fechan;
	
	//instanciar una clase
	cliente c = 	cliente(nombre, apellido,  direccion, telefono,  fechan,nit);
	c.mostrar();
	/*cout<< "Datos del cliente: " << c.getNit()<<","<<c.getNombres()<<","<<c.getApellidos()<<","<<c.getDireccion()<<","<<c.getTelefono()<<","<<c.getFechaN();*/
	
	/*cout << "Ingrese Nit: ";
	cin >> nit;
	c.setNit(nit);
	c.mostrar();
	cliente c = 	cliente();
	c.setNit(nit);
	c.setNombres(nombre);
	c.setApellidos(apellido);
	c.setDireccion(direccion);
	c.setTelefono(telefono);
	c.setFechaN(fechan);*/
	
	
}