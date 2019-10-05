#include<iostream>
#include<string>
using namespace std;
int main()
{
  struct Carro
  {
    string color;
    string modelo;
    int puertas;
    string motor;
    string gamma;
    string transmision;
    int anio;
    string techo;
  };
  Carro car1;
  cout<<"Ingrese el modelo de carro: "<<endl;
  cin>>car1.modelo;
  cout<<"Ingrese el cilindraje: "<<endl;
  cin.ignore();//Sirve para ignorar cin y no salte siguiente cin
  getline(cin,car1.motor);//Ignora los espacios y permite tenerlos
  cout<<"Ingrese el color del "<<car1.modelo<<": "<<endl;
  cin>>car1.color;
  cout<<"Ingrese el anio del "<<car1.modelo<<" : "<<endl;
  cin>>car1.anio;
  cout<<"Ingrese el numero de puertas(3 0 5): "<<endl;
  cin>>car1.puertas;
  cout<<"Seleccione su tipo de transmision: "<<endl;
  cin>>car1.transmision;
  cout<<"Ingrese la gamma de su carro: "<<endl;
  cin>>car1.gamma;
  cout<<"Ingrese el tipo de techo: "<<endl;
  cin>>car1.techo;
  system("cls");
  cout<<"******Caracteristicas del "<<car1.modelo<<"******"<<endl;
  cout<<"Modelo: "<<car1.modelo<<endl;
  cout<<"Cilindraje: "<<car1.motor<<endl;
  cout<<"Color: "<<car1.color<<endl;
  cout<<"Anio: "<<car1.anio<<endl;
  cout<<"No. de puertas: "<<car1.puertas<<endl;
  cout<<"Tipo de transmision: "<<car1.transmision<<endl;
  cout<<"Gamma del carro: "<<car1.gamma<<endl;
  cout<<"Tipo de techo: "<<car1.techo<<endl;
return 0;
}
