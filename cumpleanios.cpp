//Axel Garnica Estrada
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int lenght=20;
	struct fecha{
		int dia;
		int mes;
		int anio;
		string nombre;
};/*Aqui podria decir cumpleaños,aniversario;
 pero no tomaria en cuenta otros
  valores que pudieran estar en
  el otro struct*/
		struct persona{
		struct fecha cumpleanios;
		struct fecha aniversario;
		};
		struct persona ser;
		struct fecha miCumple;
		miCumple={5,10,2019,"Victor Santana"};
		struct fecha mauricio;
		cout<<"Nombre del cumpleaniero: "<<miCumple.nombre<<endl;
		system("pause");
		ser.cumpleanios={12,6,2000,"Joel"};
		ser.aniversario={21,8,2019,"I y L"};
		cout<<"Dia de cumpleanos: "<<ser.cumpleanios.dia<<endl;
		cout<<"Mes de cumpleanos: "<<ser.cumpleanios.mes<<endl;
		cout<<"Año de cumpleanos: "<<ser.cumpleanios.anio<<endl;
		cout<<"Nombre de cumpleanero: "<<ser.cumpleanios.nombre<<endl;
		cout<<"Dia de Aniversario: "<<ser.aniversario.dia<<endl;
		cout<<"Mes de Aniversario: "<<ser.aniversario.mes<<endl;
		cout<<"Año de Aniversario: "<<ser.aniversario.anio<<endl;
		cout<<"Iniciales: "<<ser.aniversario.nombre<<endl;
		cout<<"Captura el nombre: "<<endl;
		cin>>ser.aniversario.nombre;
		cout<<"El nombre capturado es: "<<ser.aniversario.nombre<<endl;
		system("pause");
}
