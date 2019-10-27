#include<iostream>

using namespace std;

struct alumno{
	string codigo;
	string nombre;
	string carrera;

};

alumno lista[30];
void nuevo (int p);
int main(){
	int opc,p=0;


	do{
	a:
	cout<<"Bienvenido a la base de datos de alumnos:";
	cout<<"\n\n1. Agregar alumno \n2. Consultar \n3. Modificar datos \n4. Salir";
	cout<<"\n\n\tElige una opcion: ";
	cin>>opc;

	switch(opc){
		case 1: //agregar
			{
				nuevo(p);
				p++;
				break;
				}
		case 2:// consultar
			{
			break;
			}
		case 3://modificar
			{
			break;
			}
		case 4:
			{
			break;
			}


		default:
		{
			cout<<"Opcion invalida, ingrese un nuevo valor\n\n";
			 goto a;
			break;
			}
		}
		}while (opc!=4);


		return 0;



	}//main

	void nuevo( int p){
		cout<<"Introduce el codigo\n";
		cin>>lista[p].codigo;
		cout<<"Introduce el nombre\n";
		cin>>lista[p].nombre;
		cout<<"Introduce la carrera\n";
		cin>>lista[p].carrera;
		return ;
	}
