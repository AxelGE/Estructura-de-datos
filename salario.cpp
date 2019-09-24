#include<iostream>
#include<string>
using namespace std;
struct Empleado
{
  string nombre;
  int edad;
  string puesto;
  float salario;
};
int main()
{
  Empleado emp1;

  cout<<"****Registro de empleado****"<<endl;
  cout<<"Ingrese nombre del empleado: "<<endl;
  getline(cin,emp1.nombre);
  cout<<"Ingrese su edad: "<<endl;
  cin>>emp1.edad;
  cout<<"Ingrese su puesto: "<<endl;
  cin.ignore();
  getline(cin,emp1.puesto);
  cout<<"Ingrese su salario: "<<endl;
  cin>>emp1.salario;
  system("cls");
  cout<<"****Informacion de empleado****"<<endl;
  cout<<"Nombre: "<<emp1.nombre<<endl;
  cout<<"Edad: "<<emp1.edad<<endl;
  cout<<"Puesto del empleado: "<<emp1.puesto<<endl;
  cout<<"Salario del empleado:$"<<emp1.salario<<endl;
  return 0;
}
