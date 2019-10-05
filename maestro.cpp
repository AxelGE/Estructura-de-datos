#include<iostream>
using namespace std;
#define MAX 100
class datosMaestros
{
public:
  int num;
  string nombre;
  string fecha;
  string gradoA;
  string cat;
};datosMaestros *Maestros = new datosMaestros[MAX];
int registro();
void consulta();
void modificar();
void ordenar();
int n,opc,c;
int main()
{
  cout<<"****Menu de MAestros****"<<endl;
  cout<<"1.-Registro"<<endl;
  cout<<"2.-Consulta"<<endl;
  cout<<"3.-Modificar"<<endl;
  cout<<"4.-Ordenar"<<endl;
  cout<<"5.-Salir"<<endl;
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
    modificar();
    break;
    case 4: system("cls");
    ordenar();
    break;
    case 5: return 0;
    break;
    default: system("cls");
    main();
    break;
  }
 return 0;
}
int registro()
{
  cout<<"Cuantos maestros deseas registrar?"<<endl;
  cin>>n;
  system("cls");
  Inicia:
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el numero del maestro: "<<endl;
    cin>>Maestros[i].num;
    if(Maestros[i].num == Maestros[i-1].num)
    {
      cout<<"Ese maestro ya existe!"<<endl;
      goto Inicia;
    }
    else
    cout<<"Ingrese el nombre del maestro: "<<endl;
    cin.ignore();
    getline(cin,Maestros[i].nombre);
    cout<<"Ingrese fecha en la que ingreso a la facultad: "<<endl;
    cin>>Maestros[i].fecha;
    cout<<"Ingrese el grado academico del maestro: "<<endl;
    cin>>Maestros[i].gradoA;
    cout<<"Ingrese la categoria del maestro: "<<endl;
    cin>>Maestros[i].cat;
    system("cls");
  }
  main();
return n;
}
void consulta()
{
  string r;
  string s="si";
  Cons:
  cout<<"Que maestro desea consultar: "<<endl;
  cin>>c;
  system("cls");
  for(int i=0;i<n;i++)
  {
    if(c==Maestros[i].num)
    {
      cout<<"***Datos del maestro****"<<endl;
      cout<<"Nombre: "<<Maestros[i].nombre<<endl;
      cout<<"Fecha de ingreso: "<<Maestros[i].fecha<<endl;
      cout<<"Grado academico: "<<Maestros[i].gradoA<<endl;
      cout<<"Categoria: "<<Maestros[i].cat<<endl;
    }
  }
  cout<<"Desea realizar otra consulta? "<<endl;
  cin>>r;
  if(r==s)
  {
    goto Cons;
  }
  else
  {
    system("cls");
    main();
  }
}
void modificar()
{
  string r;
  string s="si";
  Mod:
  cout<<"Que maestro desea modificar: "<<endl;
  cin>>c;
  system("cls");
  for(int i=0;i<n;i++)
  {
    if(c==Maestros[i].num)
    {
      cout<<"***Datos del maestro****"<<endl;
      cout<<"Nuevo nombre: "<<endl;
      cin>>Maestros[i].nombre;
      cout<<"Nueva fecha de ingreso: "<<endl;
      cin>>Maestros[i].fecha;
      cout<<"Nuevo grado academico: "<<endl;
      cin>>Maestros[i].gradoA;
      cout<<"Nueva categoria: "<<endl;
      cin>>Maestros[i].cat;
    }
  }
  cout<<"Desea realizar otra modificacion? "<<endl;
  cin>>r;
  if(r==s)
  {
    goto Mod;
  }
  else
  {
    system("cls");
    main();
  }
}
void ordenar()
{

}
