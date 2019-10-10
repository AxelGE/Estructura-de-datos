#include<iostream>
using namespace std;
#define MAX 100
class datosCentro
{
public:
  string sexo;
  string nombre;
  int edad;
  int pesoI;
  int pesoId;
};datosCentro *Centro = new datosCentro[MAX];
int registro();
void bajas();
int actualizar();
void consultan();
int n,opc,c;
int main()
{
  cout<<"****Menu de Centro de Nutricion****"<<endl;
  cout<<"1.-Registro"<<endl;
  cout<<"2.-Consulta"<<endl;
  cout<<"3.-Actualizar"<<endl;
  cout<<"4.-Baja"<<endl;
  cout<<"5.-Salir"<<endl;
  cout<<"Eliga una opcion: "<<endl;
  cin>>opc;
  switch(opc)
  {
    case 1: system("cls");
    registro();
    break;
    case 2: system("cls");
    consultan();
    break;
    case 3: system("cls");
    actualizar();
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
  cout<<"Cuantos pacientes desea registrar: "<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el nombre del paciente: "<<endl;
    cin>>Centro[i].nombre;
    cout<<"Ingrese el sexo de paciente (M 0 F): "<<endl;
    cin>>Centro[i].sexo;
    cout<<"Ingrese la edad del paciente: "<<endl;
    cin>>Centro[i].edad;
    cout<<"Ingrese el peso inicial del paciente: "<<endl;
    cin>>Centro[i].pesoI;
    cout<<"Ingrese el peso ideal del paciente: "<<endl;
    cin>>Centro[i].pesoId;
    system("cls");
  }
  main();
return n;
}
int actualizar()
{
  string x;
  int np,z;
  cout<<"Cual es el nombre del paciente: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Centro[i].nombre)
    {
    cout<<"Cual es el nuevo peso: "<<endl;
    cin>>np;
   }
   z=i;
  }
  Centro[z].pesoI=np;
  system("pause");
  system("cls");
  main();
  return Centro[z].pesoI;
}
void consultan()
{
  string x;
  cout<<"Cual es el nombre del paciente: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Centro[i].nombre)
    {
      cout<<"Nombre del paciente: "<<Centro[i].nombre<<endl;
      cout<<"Sexo: "<<Centro[i].sexo<<endl;
      cout<<"Peso actual: "<<Centro[i].pesoI<<endl;
      cout<<"Peso Ideal: "<<Centro[i].pesoId<<endl;
      cout<<endl;
    }
  }
      system("pause");
      system("cls");
      main();
}
void bajas()
{
  string x;
  cout<<"Nombre del paciente: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Centro[i].nombre && Centro[i].pesoI==Centro[i].pesoId)
    {
      Centro[i].nombre="";
      Centro[i].sexo="";
      Centro[i].edad=0;
      Centro[i].pesoI=0;
      Centro[i].pesoId=0;
      cout<<"Registro borrado exitosamente!"<<endl;
    }
  }
  system("cls");
  main();
}
