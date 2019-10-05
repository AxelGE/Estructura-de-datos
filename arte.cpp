#include<iostream>
using namespace std;
#define MAX 100
class datosAlumnas
{
public:
  int num;
  string nombre;
  int edad;
  string disciplina;
};datosAlumnas *Alumnas = new datosAlumnas[MAX];
int registro();
void consulta();
void modificar();
void bajas();
int n,opc,c;
int main()
{
  cout<<"****Menu de Alumnas****"<<endl;
  cout<<"1.-Registro"<<endl;
  cout<<"2.-Consulta"<<endl;
  cout<<"3.-Modificar"<<endl;
  cout<<"4.-Bajas"<<endl;
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
    bajas();
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
  cout<<"Cuantas alumnas deseas registrar?"<<endl;
  cin>>n;
  system("cls");
  Inicia:
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el numero de la alumna: "<<endl;
    cin>>Alumnas[i].num;
    if(Alumnas[i].num == Alumnas[i-1].num)
    {
      cout<<"Esa alumna ya existe!"<<endl;
      goto Inicia;
    }
    else
    cout<<"Ingrese el nombre de la alumna: "<<endl;
    cin.ignore();
    getline(cin,Alumnas[i].nombre);
    cout<<"Ingrese la edad de la alumna: "<<endl;
    cin>>Alumnas[i].edad;
    cout<<"Ingrese la disciplina de la alumna (Danza,Pintura,Canto,Piano o Teatro): "<<endl;
    cin>>Alumnas[i].disciplina;
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
  cout<<"Consultar por: "<<endl;
  cout<<"1.-Numero de control"<<endl;
  cout<<"2.-Disciplina"<<endl;
  cin>>opc;
  system("cls");
  if(opc==1)
  {
    cout<<"Cual es el numero de control: "<<endl;
    cin>>c;
    system("cls");
  for(int i=0;i<n;i++)
  {
    if(c==Alumnas[i].num)
    {
      cout<<"***Datos de la alumna****"<<endl;
      cout<<"Numero de control: "<<Alumnas[i].num<<endl;
      cout<<"Nombre: "<<Alumnas[i].nombre<<endl;
      cout<<"Edad: "<<Alumnas[i].edad<<endl;
      cout<<"Disciplina: "<<Alumnas[i].disciplina<<endl;
    }
  }
  }
  if(opc==2)
  {
    cout<<"Cual es la disciplina de la alumna: "<<endl;
    cin>>d;
    system("cls");
  for(int i=0;i<n;i++)
  {
    if(d==Alumnas[i].disciplina)
    {
      cout<<"***Datos de la alumna****"<<endl;
      cout<<"Numero de control: "<<Alumnas[i].num<<endl;
      cout<<"Nombre: "<<Alumnas[i].nombre<<endl;
      cout<<"Edad: "<<Alumnas[i].edad<<endl;
      cout<<"Disciplina: "<<Alumnas[i].disciplina<<endl;
      cout<<endl;
    }
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
void modificar()
{
  string r;
  string s="si";
  Mod:
  cout<<"Que alumna desea modificar: "<<endl;
  cin>>c;
  system("cls");
  for(int i=0;i<n;i++)
  {
    if(c==Alumnas[i].num)
    {
      cout<<"***Datos de la alumna****"<<endl;
      cout<<"Nuevo nombre: "<<endl;
      cin>>Alumnas[i].nombre;
      cout<<"Nueva edad: "<<endl;
      cin>>Alumnas[i].edad;
      cout<<"Nueva disciplina: "<<endl;
      cin>>Alumnas[i].disciplina;
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
void bajas()
{
  int x;
  cout<<"Numero de control de la alumna: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Alumnas[i].num)
    {
      Alumnas[i].num=0;
      Alumnas[i].edad=0;
      Alumnas[i].nombre="";
      Alumnas[i].disciplina="";
    }
  }
  system("cls");
  main();
}
