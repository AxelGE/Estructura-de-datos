#include<iostream>
#include<string.h>
#include<conio.h>
#include<vector>
#define MAX 100
int n,aux;
std::vector<int> numeros(MAX,0);
void ordenamiento();
void imprimir();
using namespace std;
int main()
{
  cout<<"Cuantos numeros desea ingresar: "<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el numero "<<i+1<<": "<<endl;
    cin>>numeros[i];
    system("cls");
  }
  ordenamiento();
}
void ordenamiento()
{
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    if(numeros[j]<numeros[j+1])
    {
    aux=numeros[j];
    numeros[j]=numeros[j+1];
    numeros[j+1]=aux;
    }
  }
}
  imprimir();
}
void imprimir()
{
  cout<<"El numero mayor es: "<<numeros[0]<<endl;
  cout<<"El numero menor es: "<<numeros[n-1]<<endl;
}
