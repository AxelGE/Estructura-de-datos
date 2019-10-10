#include<iostream>
using namespace std;
#define MAX 100
class datosPape
{
public:
  int num;
  string descripcion;
  int cant;
  int costU;
};datosPape *Pape = new datosPape[MAX];
int registro();
void bajas();
int venta();
void consultan();
void consultag();
int n,opc,c;
int main()
{
  cout<<"****Menu de Papeleria****"<<endl;
  cout<<"1.-Registro"<<endl;
  cout<<"2.-Bajas"<<endl;
  cout<<"3.-Ventas"<<endl;
  cout<<"4.-Consulta por numero"<<endl;
  cout<<"5.-Consulta general"<<endl;
  cout<<"6.-Salir"<<endl;
  cout<<"Eliga una opcion: "<<endl;
  cin>>opc;
  switch(opc)
  {
    case 1: system("cls");
    registro();
    break;
    case 2: system("cls");
    bajas();
    break;
    case 3: system("cls");
    venta();
    break;
    case 4: system("cls");
    consultan();
    break;
    case 5: system("cls");
    consultag();
    break;
    case 6: return 0;
    break;
    default: system("cls");
    main();
    break;
  }
 return 0;
}
int registro()
{
  cout<<"Cuantos articulos desea registrar: "<<endl;
  cin>>n;
  system("cls");
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el numero de inventario: "<<endl;
    cin>>Pape[i].num;
    cout<<"Ingrese descripcion del articulo: "<<endl;
    cin.ignore();
    getline(cin,Pape[i].descripcion);
    cout<<"Ingrese la cantidad en existencia: "<<endl;
    cin>>Pape[i].cant;
    cout<<"Ingrese el costo unitario: "<<endl;
    cin>>Pape[i].costU;
    system("cls");
  }
  main();
return n;
}
int venta()
{
  int x,y,t,z;
  vent:
  cout<<"Que articulo desea: "<<endl;
  cin>>x;
  cout<<"Cuantos desea: "<<endl;
  cin>>y;
  for(int i=0;i<n;i++)
  {
    if(x==Pape[i].num)
    {
    if(Pape[i].cant < y)
     {
       cout<<"No tenemos "<<y<<" en exitencia."<<endl;
       goto vent;
     }
     else
     {
       Pape[i].cant=Pape[i].cant-y;
     }
     t=Pape[i].costU*y;
   }
   z=i;
  }
  cout<<"El total de su compra es:$"<<t<<endl;
  system("pause");
  system("cls");
  main();
  return Pape[z].cant;
}
void consultan()
{
  int x;
  cout<<"Que numero de articulo desea consultar: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Pape[i].num)
    {
      cout<<"Numero de inventario: "<<n<<endl;
      cout<<"Descripcion: "<<Pape[i].descripcion<<endl;
      cout<<"Cantidad en existencia: "<<Pape[i].cant<<endl;
      cout<<"Costo unitario:$"<<Pape[i].costU<<endl;
      cout<<endl;
    }
  }
      system("pause");
      system("cls");
      main();
}
void consultag()
{
      for(int i=0;i<n;i++)
      {
        cout<<"Numero de inventario: "<<Pape[i].num<<endl;
        cout<<"Descripcion: "<<Pape[i].descripcion<<endl;
        cout<<"Cantidad en existencia: "<<Pape[i].cant<<endl;
        cout<<"Costo unitario:$"<<Pape[i].costU<<endl;
      }
      system("pause");
      system("cls");
      main();
}
void bajas()
{
  int x;
  cout<<"Numero de inventario: "<<endl;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(x==Pape[i].num && Pape[i].cant==0)
    {
      Pape[i].num=0;
      Pape[i].descripcion="";
      Pape[i].cant=0;
      Pape[i].costU=0;
    }
  }
  system("cls");
  main();
}
