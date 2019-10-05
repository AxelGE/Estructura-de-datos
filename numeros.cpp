#include<iostream>
using namespace std;
int main()
{
int n,x,y;
string s= "si";
string r;
cout<<"Cuantos numeros deseas ingresar?: "<<endl;
cin>>n;
int numeros[n];
for(int i=0;i<n;i++)
{
  cout<<"En que indice deseas agregarlo?: "<<endl;
  cin>>x;
  cout<<"Ingresa el valor del numero: "<<endl;
  cin>>numeros[x];
}
do
{
  cout<<"Que indice deseas visualizar?: "<<endl;
  cin>>y;
  if(y>n)
  {
    cout<<"Ese indice no existe."<<endl;
  }
  else
  cout<<"El valor del indice "<<y<<" es: "<<numeros[y]<<endl;
  cout<<endl;
  cout<<"Deseas buscar otro valor?"<<endl;
  cin>>r;
}
while(s==r);
return 0;
}
