#include<iostream>
using namespace std;
void ordenamiento(int lista[])
{
int aux;
for(int i=0;i<10;i++)
{
  for(int j=0;j<10;j++)
  {
    if(lista[j]<lista[j+1])
    {
    aux=lista[j];
    lista[j]=lista[j+1];
    lista[j+1]=aux;
    }
  }
}
}
int main()
{
  int lista[10];
  for(int i=0;i<10;i++)
  {
    cout<<"Ingrese el numero "<<i+1<<": "<<endl;
    cin>>lista[i];
  }
  ordenamiento(lista);
  cout<<"****Ordenados de menor a myor son****"<<endl;
  for(int i=10;i>0;i--)
  {
    cout<<lista[i]<<endl;
  }
  return 0;
}
