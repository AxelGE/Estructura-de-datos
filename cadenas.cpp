#include<iostream>
#include<vector>
#include<string.h>
#include<conio.h>
#define MAX 50
using namespace std;
void vocal();
void consonante();
void eliminar();
void todas();
vector<char> cadena(MAX,0);
int n,opc;
int long_buffer=80;
int main()
{
  cout<<"Cuantas cadenas desea agregar: "<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
    cin.ignore();
    cout<<"Ingrese la cadena numero "<<i+1<<": "<<endl;
    cin.getline(cadena[i],long_buffer);
    system("cls");
  }
  cout<<"****Menu de cadenas****"<<endl;
  cout<<"1.-Vocal"<<endl;
  cout<<"2.-Consonante"<<endl;
  cout<<"3.-Eliminar"<<endl;
  cout<<"4.-Todas"<<endl;
  cout<<"5.-Salir"<<endl;
  cin>>opc;
  switch(opc)
  {
    case 1: vocal();
    system("cls");
    break;
  /*  case 2: consonante();
    system("cls");
    break;
    case 3: eliminar();
    system("cls");
    break;
    case 4:todas();
    system("cls");
    break;
    case 5: return 0;
    break;*/
    default: system("cls");
    break;
  }
  return 0;
}
void vocal()
{
  for(int i=0;i<n;i++)
  {
      cout<<cadena[i]<<endl;
  }
  system("pause");
}
