#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX 100
using namespace std;
void ordenamiento(char lista[][MAX], int n)
{
  char aux[MAX];
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(strcmp(lista[i],lista[j])>0)
      {
        strcpy(aux,lista[i]);
        strcpy(lista[i],lista[j]);
        strcpy(lista[j],aux);
      }
    }
  }
}
int main()
{
  int x=0;
  cout<<"Cuantas palabras deseas ordenar?: "<<endl;
  cin>>x;
  char lista[x][MAX];
  for(int j=0;j<x;j++)
  {
    cout<<"Ingresa la palabra numero "<<j+1<<": "<<endl;
    cin>>lista[j];
  }
  int n = sizeof(lista)/sizeof(lista[0]);
  ordenamiento(lista, n);
  cout<<"****Ordenados alfabeticamente son****"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"La palabra numero "<<i<<" es: "<<lista[i]<<endl;
  }
  return 0;
}
