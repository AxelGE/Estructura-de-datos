#include <iostream>

using namespace std;

struct alumno{
  string codigo;
  string nombre;
  string carrera;
};

alumno lista[30];
void nuevo (int p);
void consulta();
void modificar();
int main(){
    int opc, p=0;


    do{
    menu:
    system("cls");
    cout<<"Es una base de datos de alumnos"<<endl;
    cout<<"1.Agregar un alumno"<<endl;
    cout<<"2.Consultar"<<endl;
    cout<<"3.Modificar"<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"Elije una opcion entre el 1-4"<<endl;
    cin>>opc;
    system("cls");

    switch(opc){
    case 1:
         {
         nuevo (p);
         p++;
         break;
         }
    case 2: consulta();
         {
         break;
         }
    case 3: modificar();
         {
         break;
         }
    case 4:
         {
         cout<<"Adios popo"<<endl;
         break;
         }
    default:
         {
         cout<<"Opcion no valida"<<endl;
         goto menu;
         break;
         }

        }
    }
    while (opc !=4);
    return 0;
  }

void nuevo (int p){
    cout<<"Introduce el codigo: "<<endl;
    cin>>lista[p].codigo;
    cout<<"Introduce el nombre: "<<endl;
    cin>>lista[p].nombre;
    cout<<"Introduce la carrera: "<<endl;
    cin>>lista[p].carrera;
}
void consulta()
{
  string nm;
    cout<<"Introduce el nombre: "<<endl;
    cin>>nm;
    for(int i=0;i<30;i++)
    {
    if(lista[i].nombre==nm)
    {
      cout<<"Nombre: "<<lista[i].nombre<<endl;
      cout<<"Codigo: "<<lista[i].codigo<<endl;
      cout<<"Carrera: "<<lista[i].carrera<<endl;
    }
  }
  system("pause");
}
void modificar()
{
  string nm;
  int n;
    cout<<"Introduce el nombre: "<<endl;
    cin>>nm;
    system("cls");
    for(int i=0;i<30;i++)
    {
    if(lista[i].nombre==nm)
    {
      opciones:
      cout<<"Que deseas modificar: "<<endl;
      cout<<"1.-Nombre"<<endl;
      cout<<"2.-Codigo"<<endl;
      cout<<"3.-Carrera"<<endl;
      cin>>n;
      if(n==1)
      {
        cout<<"Ingrese nuevo nombre: "<<endl;
        cin>>lista[i].nombre;
        main();
      }
      if(n==2)
      {
        cout<<"Ingrese nuevo codigo: "<<endl;
        cin>>lista[i].codigo;
        main();
      }
      if(n==3)
      {
        cout<<"Ingrese nueva carrera: "<<endl;
        cin>>lista[i].carrera;
        main();
      }
    }
  }
}
