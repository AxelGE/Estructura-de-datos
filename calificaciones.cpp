#include<iostream>
#include<string>
using namespace std;
class Calificaciones
{
public:
  string materias;
  float calificacion;
};
Calificaciones cal1;
Calificaciones cal2;
Calificaciones cal3;
void impresion();
int main()
{
  cout<<"****Registro de calificaciones****"<<endl;
  system("pause");
  system("cls");
  cout<<"Ingresa el nombre de la materia: "<<endl;
  getline(cin,cal1.materias);
  cout<<"Ingresa su calificacion: "<<endl;
  cin>>cal1.calificacion;
  cin.ignore();
  system("cls");
  cout<<"Ingresa el nombre de la materia: "<<endl;
  getline(cin,cal2.materias);
  cout<<"Ingresa su calificacion: "<<endl;
  cin>>cal2.calificacion;
  cin.ignore();
  system("cls");
  cout<<"Ingresa el nombre de la materia: "<<endl;
  getline(cin,cal3.materias);
  cout<<"Ingresa su calificacion: "<<endl;
  cin>>cal3.calificacion;
  cin.ignore();
  system("cls");
  impresion();
}
void impresion()
{
    cout<<"Materia 1.-"<<endl;
    cout<<"Nombre: "<<cal1.materias<<endl;
    cout<<"Calificacion: "<<cal1.calificacion<<endl;
    cout<<endl;
    cout<<"Materia 2.-"<<endl;
    cout<<"Nombre: "<<cal2.materias<<endl;
    cout<<"Calificacion: "<<cal2.calificacion<<endl;
    cout<<endl;
    cout<<"Materia 1.-"<<endl;
    cout<<"Nombre: "<<cal3.materias<<endl;
    cout<<"Calificacion: "<<cal3.calificacion<<endl;
    cout<<endl;
}
