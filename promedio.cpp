#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,t=0,prom;
  cout<<"Cuantos numeros deseas ingresar: "<<endl;
  cin>>n;
  system("cls");
  std::vector<int> arreglo_1(n,0);
  std::vector<int> mayores(n,0);
  std::vector<int> menores(n,0);
  for(int i=0;i<n;i++)
  {
    cout<<"Ingrese el valor "<<i+1<<": "<<endl;
    cin>>arreglo_1[i];
    system("cls");
    t=t+arreglo_1[i];
  }
  prom=t/n;
  for(int i=0;i<n;i++)
  {
    if(arreglo_1[i]>prom)
    {
      mayores[i]=arreglo_1[i];
    }
    else
    menores[i]=arreglo_1[i];
  }
  cout<<"****Numeros mayores al promedio****"<<endl;
  for(int i=0;i<n;i++)
  {
    if(mayores[i]!=0)
    {
    cout<<mayores[i]<<endl;
    }
  }
  cout<<"****Numeros menores al promedio****"<<endl;
  for(int i=0;i<n;i++)
  {
    if(menores[i]!=0)
    {
    cout<<menores[i]<<endl;
    }
  }
return 0;
}
