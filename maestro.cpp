#include<iostream>
using namespace std;
#define MAX 100
class Maestros
{
public:
  int num[MAX];
  char nombre[MAX];
  char fecha[MAX];
  char gradoA[MAX];
  char cat[MAX];
  int n=0;
public:
  void registro()
  {
    cout<<"Cuantos deseas registrar?: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<"Ingrese numero de matricula: "<<endl;
      cin>>num[i];
      for(int j=0;j<n;j++)
      {
        if(num[i]==num[j])
        {
          cout<<"Ese numero ya existe! no puedes crear registro doble."<<endl;
        }
      }
    }
  };
};
int main()
{
 Maestros reg;
 reg.registro();
 return 0;
}
