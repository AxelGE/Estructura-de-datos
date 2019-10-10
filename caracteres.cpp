#include<iostream>
#include<vector>
#include<string.h>
#include<conio.h>
#define MAX 50
using namespace std;
vector<char> cadena(MAX,0);
int n,opc;
void captura();
void eliminar();
void mostrar();
int main()
{
  cout<<"****Menu de cadenas****"<<endl;
  cout<<"1.-Captura"<<endl;
  cout<<"2.-Eliminar repetidas"<<endl;
  cout<<"3.-Mostrar"<<endl;
  cout<<"4.-Salir"<<endl;
  cin>>opc;
  switch(opc)
  {
    case 1: system("cls");
    captura();
    break;
    case 2: system("cls");
    eliminar();
    break;
    case 3: system("cls");
    mostrar();
    break;
    case 4: return 0;
    break;
    default: system("cls");
    break;
  }
  return 0;
}
void captura()
{
  cout<<"Cuantas cadenas desea agregar: "<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese la cadena numero "<<i+1<<": "<<endl;
    cin>>cadena[i];
    system("cls");
  }
  main();
}
void eliminar()
{
  int x=0;
  for(int i=0;i<n;i++)
  {
    if(cadena[i]==cadena[i+1])
    {
      cadena.erase(cadena.begin()+i);
      x++;
    }
    else
    {
      cout<<"Se han eliminado "<<x<<" cadenas."<<endl;
    }
  }
  system("pause");
  system("cls");
  main();
}
void mostrar()
{
  for(int i=0;i<n;i++)
  {
    cout<<"Cadena "<<i+1<<": "<<cadena[i]<<endl;
  }
  system("pause");
  system("cls");
  main();
}
