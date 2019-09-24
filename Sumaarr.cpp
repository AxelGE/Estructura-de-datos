#include<iostream>
using namespace std;
int main()
{
 int numeros[]={15,11,84,23,14};
 int suma=0;
 cout<<"****Suma de numeros enteros****"<<endl;
 for(int i=0;i<5;i++)
 {
   suma=suma+numeros[i];
 }
 cout<<"El resultado de la suma es: "<<suma<<endl;
 return 0;
}
