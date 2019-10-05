#include<iostream>
#include<string>
using namespace std;
int main()
{
  struct Carro
  {
    string marca;
    string modelo;
    string anio;
    string placa;
    string transmision;
  };
  struct detalles
  {
    struct Carro color;
    struct Carro vidrios;
    struct Carro tapizeria;
    struct Carro calefaccion;
  };


return 0;
}
