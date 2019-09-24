#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class Persona{

protected:	
	int edad;		
	string nombre;
public:  
	Persona(int,string);

 	//void nadar();
 	//void bailar();
 	void bailar(){
		cout<<" Mi nombre es "<<nombre<<" y me gusta bailar\n";}
		
	
	public: void nadar(){
		cout<<"mi nombre es "<<nombre<<" y estoy nadando y tengo "<<edad<<" anios"<<endl;
	}
};
Persona::Persona(int _edad, string _nombre){
	edad =_edad;
	nombre = _nombre;}
	
	
	int main(){
		int edad;
		string nombre;
		cout<<"ingrese su edad"<<endl;
		cin>>edad;
		cout<<"ingrese su nombre"<<endl;
		cin>>nombre;
	Persona p1(edad,nombre);
	p1.nadar();
	p1.bailar();
	Persona people ();
	
	
}







