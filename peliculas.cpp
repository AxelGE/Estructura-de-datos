#include<iostream>
using namespace std;
#define MAX 100
class datosPelis
{
public:
  string nombre;
  string nombreDir;
  int duracion;
  string categoria;
};datosPelis *Pelis = new datosPelis[MAX];
int registro();
void consulta();
void bajas();
int n,opc,c;
int main()
{
  cout<<"****Menu de Alumnas****"<<endl;
  cout<<"1.-Registro"<<endl;
  cout<<"2.-Consulta"<<endl;
  cout<<"3.-Bajas"<<endl;
  cout<<"4.-Salir"<<endl;
  cout<<"Eliga una opcion: "<<endl;
  cin>>opc;
  switch(opc)
  {
    case 1: system("cls");
    registro();
    break;
    case 2: system("cls");
    consulta();
    break;
    case 3: system("cls");
    bajas();
    break;
    case 4: return 0;
    break;
    default: system("cls");
    main();
    break;
  }
 return 0;
}
int registro()
{
  cout<<"Cuantas peliculas deseas registrar?"<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el nombre de la pelicula: "<<endl;
    cin>>Pelis[i].nombre;
    cout<<"Ingrese el nombre del Director: "<<endl;
    cin.ignore();
    getline(cin,Pelis[i].nombreDir);
    cout<<"Ingrese la categoria de la pelicula: "<<endl;
    cin.ignore();
    getline(cin,Pelis[i].categoria);
    cout<<"Ingrese la duracion de la pelicula: "<<endl;
    cin>>Pelis[i].duracion;
    system("cls");
  }
  main();
return n;
}
void consulta()
{
  string r;
  string s="si";
  string d;
  Cons:
  system("cls");
    cout<<"Cual es el nombre de la pelicula: "<<endl;
    cin>>d;
    system("cls");
  for(int i=0;i<n;i++)
  {
    if(d==Pelis[i].nombre)
    {
      cout<<"***Datos de la pelicula****"<<endl;
      cout<<"Nombre: "<<Pelis[i].nombre<<endl;
      cout<<"Nombre dle director: "<<Pelis[i].nombreDir<<endl;
      cout<<"Duracion: "<<Pelis[i].duracion<<" min."<<endl;
      cout<<"Categoria: "<<Pelis[i].categoria<<endl;
      cout<<endl;
    }
  }
  cout<<"Desea realizar otra consulta? "<<endl;
  cin>>r;
  if(r==s)
  {
    system("cls");
    goto Cons;
  }
  else
  {
    system("cls");
    main();
  }
}
void bajas()
{
  string x;
  cout<<"Nonmbre de la pelicula: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Pelis[i].nombre)
    {
      Pelis[i].duracion=0;
      Pelis[i].nombre="";
      Pelis[i].categoria="";
      Pelis[i].nombreDir="";
    }
  }
  system("cls");
  main();
}
