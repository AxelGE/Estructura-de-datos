#include <iostream>
#include <string>
#include<sstream>
using namespace std;
int lista();
int agregar();
int opc,n,i=0;

struct carros
{
 string modelo;
 int anio;
}producto[15];

void printmodel(carros car);

int main ()
{
cout<<"****Menu de carros****"<<endl;
cout<<"1.-Listado de carros."<<endl;
cout<<"2.-Agregar nuevo carro."<<endl;
cout<<"3.-Salir."<<endl;
cin>>opc;
switch(opc)
{
  case 1 :system("cls");
  lista();
  break;
  case 2 :system("cls");
  agregar();
  break;
  case 3 : return 0;
  break;
}
return 0;
}
int lista()
{
cout<<"MODELO"<<"\t"<<"ANIO"<<endl;
for(int i=1;i<=n;i++)
{
  printmodel (producto[i]);
}
system("pause");
main();
return 0;
}
int agregar()
{
string mine;
cout<<"Cuantos deseas agregar?"<<endl;
cin>>n;
system("cls");
for(i=0;i<=n;i++)
{
  cout<<"Ingresa modelo: ";
  getline(cin,producto[i].modelo);
  cout<<"Ingresa anio: ";
  getline(cin,mine);
  stringstream(mine)>>producto[i].anio;
  system("cls");
}
main();
return 0;
}
void printmodel(carros car)
{
  cout<<car.modelo;
  cout<<"  ("<<car.anio<<")\n";
  system("cls");
}
