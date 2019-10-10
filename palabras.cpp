#include<iostream>
#include<vector>
#include<string.h>
#include<conio.h>
#define MAX 50
using namespace std;
void agregar();
void modificar();
void eliminar();
void consultar();
string espaniol[MAX];
string ingles[MAX];
int n,opc;
int main()
{
  cout<<"****Menu de cadenas****"<<endl;
  cout<<"1.-Agregar"<<endl;
  cout<<"2.-Modificar"<<endl;
  cout<<"3.-Consultar"<<endl;
  cout<<"4.-Eliminar"<<endl;
  cout<<"5.-Salir"<<endl;
  cin>>opc;
  system("cls");
  switch(opc)
  {
    case 1: agregar();
    system("cls");
    break;
    case 2: modificar();
    system("cls");
    break;
    case 3: consultar();
    system("cls");
    break;
    case 4:eliminar();
    system("cls");
    break;
    case 5: return 0;
    break;
    default: system("cls");
    break;
  }
  return 0;
}
void agregar()
{
  cout<<"Cuantas palabras desea agregar: "<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
      cout<<"Agregue la palabra en ingles: "<<endl;
      cin.ignore();
      getline(cin,ingles[i]);
      system("cls");
      cout<<"Ingrese su significado: "<<endl;
      cin.ignore();
      getline(cin,espaniol[i]);
      system("cls");
  }
  system("cls");
  main();
}
void modificar()
{
  cout<<"Que numero desea modificar: "<<endl;
  cin>>n;
  system("cls");
      cout<<"Agregue la nueva palabra en ingles: "<<endl;
      cin.ignore();
      getline(cin,ingles[n-1]);
      system("cls");
      cout<<"Ingrese su nuevo significado: "<<endl;
      cin.ignore();
      getline(cin,espaniol[n-1]);
      system("pause");
      system("cls");
      main();
}
void consultar()
{
  cout<<"Que numero de palabra desea consultar: "<<endl;
  cin>>n;
      cout<<"Palabra en ingles: "<<ingles[n-1]<<endl;
      cout<<"Significado: "<<espaniol[n-1]<<endl;
      system("pause");
      system("cls");
      main();
}
void eliminar()
{
  cout<<"Que numero de palabra desea eliminar: "<<endl;
  cin>>n;
      ingles[n-1]="";
      espaniol[n-1]="";
      system("cls");
      main();
}
