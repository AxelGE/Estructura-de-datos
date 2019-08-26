#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int p,cant,n,x,z,y,b=0,m=0,a=0,bu=0,ex=0,f=0;
int produ();
int main()
{
  system("color 0a");
  cout<<"***PRODUCCION DE NESTLE***"<<endl;
  cout<<"Que producto deseas producir?"<<endl;
  cout<<"1.-Media Crema"<<endl;
  cout<<"2.-Lehce Nido"<<endl;
  cin>>p;
  if(p==1)
  {
  system("cls");
  cout<<"Elegiste producir Media Crema"<<endl;
  system("pause");
  }
  if(p==2)
  {
    system("cls");
    cout<<"Elegiste producir Leche Nido"<<endl;
    system("pause");
    system("cls");
  }
  else if(p<1 || p>2)
  {
    system("cls");
    cout<<"****Ingresa un producto valido****"<<endl;
    cout<<endl;
    main();
  }
  else
  system("cls");
  cout<<"Cuanto deseas producir?"<<endl;
  cin>>n;
  int produc[n];
  if(n<1000)
  {
    x=1;
  }
  else if(n>=1000)
  {
    x=2;
  }
  int prod[n][z];
  switch(x)
  {
    case 1 : cout<<"La cantidad minima es 10,000"<<endl;
    system("pause");
    system("cls");
    cout<<"Cuanto deseas producir?"<<endl;
    cin>>n;
    break;
    case 2 :system("cls");
    produ();
    break;
    }
  return 0;
}
int produ()
{
  cout<<"No.\t\t"<<"Calidad"<<endl;
    int produc[n];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=8;j++)
    {
      x=rand()%200+1;
      produc[i]=produc[i]+x;
      x=0;
    }
  }
  for(int z=1;z<=n;z++)
  {
    cout<<z<<"\t\t"<<produc[z]<<endl;
    if(produc[z]>=0&&produc[z]<=500)
    {
      b=b+1;
    }
    if(produc[z]>500&&produc[z]<=900)
    {
      m=m+1;
    }
    if(produc[z]>900&&produc[z]<=1300)
    {
      a=a+1;
    }
    if(produc[z]>1300&&produc[z]<=1400)
    {
      ex=ex+1;
    }
    if(produc[z]>1600)
    {
      f=f+1;
    }
  }
  system("pause");
  system("cls");
  cout<<"La cantidad de Productos de calidad baja son: "<<b<<endl;
  cout<<"La cantidad de Productos de calidad mala son: "<<m<<endl;
  cout<<"La cantidad de Productos de calidad aceptable son: "<<a<<endl;
  cout<<"La cantidad de Productos de calidad buena son: "<<bu<<endl;
  cout<<"La cantidad de Productos de calidad excelente son: "<<ex<<endl;
  cout<<"La cantidad de Productos fuera de rango son: "<<f<<endl;
  return 0 ;
}
