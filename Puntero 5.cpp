#include <iostream>
#include <stdlib.h>
#include <conio.h>
	using namespace std;


struct Alumno{
	int codigo;
	string nombre;
	string apellido;
	int edad;
	string carrera;
	string Fechan;
	string sexo;
};	
Alumno lista[30] ;
void registro(int p);
void consultar();

int main(){	

int reg,eli;
int p=0;
	int opc,opc1=1;
	
	do{
	cout<<".............Escuela UDG................"<<endl;
	cout<<"1. registro"<<endl;
	cout<<"2. consultas"<<endl;
	cout<<"3. Modificar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"ingresa el valor de la opcion que deceas hace"<<endl;
	cin>>opc;
	switch (opc){
		case 1:{
			system("cls");
			registro(p);
			p++;
			
			break;
		}
		case 2:{
			consultar();
			
		
			break;
		}
		case 3:{ 
		
		}
		case 4:{
			system("cls");

		cout<<"Bai"<<endl;
			break;	
			
		}
		default: {
			cout<<"Pon una opcion correcta muchacho menso"<<endl;
			break;
		}
	}
	
	system("pause");
	cout<<"Desea continuar ingrese 1 "<<endl;
	cin>>opc1;
	system("cls");}
	
	while (opc1==1);
	return 0;
}
void registro(int p){

cout<<"Bienvenido a  la base de datos de estudiantes"<<endl;

	cout<<"ingrese el codigo del alumno"<<endl;
	cin>>lista[p].codigo;
	cout<<"ingrese el nombre"<<endl;
	cin>>lista[p].nombre;
	cout<<"ingrese el apellido"<<endl;
	cin>>lista[p].apellido;
	cout<<"ingrese la edad"<<endl;
	cin>>lista[p].edad;
	cout<<"ingrese la carrera"<<endl;
	cin>>lista[p].carrera;
	cout<<"ingrese la fecha de nacimiento"<<endl;
	cin>>lista[p].Fechan;
	cout<<"ingrese el sexo"<<endl;
	cin>>lista[p].sexo;

}
void consultar(){
for(int i=0;i<30;i++){
	cout<<"los datos del alumno "<<i<< "son: "<<endl;
	cout<<"El codigo del es alumno"<<endl;
	cout<<lista[i].codigo<<endl;
	cout<<" el nombre"<<endl;
	cout<<lista[i].nombre<<endl;
	cout<<" el apellido"<<endl;
	cout<<lista[i].apellido<<endl;
	cout<<" la edad"<<endl;
	cout<<lista[i].edad<<endl;
	cout<<" la carrera"<<endl;
	cout<<lista[i].carrera<<endl;
	cout<<"la fecha de nacimiento"<<endl;
	cout<<lista[i].Fechan<<endl;
	cout<<" el sexo"<<endl;
	cout<<lista[i].sexo<<endl;
	}}
