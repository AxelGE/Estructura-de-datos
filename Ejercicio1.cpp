#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int opc,product,cant,cal=0,x,i=1,j=0;
int prodd();
int b,m,a,bu,es,f;
int calidades[200][6];
int main()
{
	cout<<"Que producto deseas producir?"<<endl;
	cout<<"1.-Media Crema"<<endl;
	cout<<"2.-Leche Nido"<<endl;
	cin>>product;
	system("cls");
	switch(product)
	{
		case 1:cout<<"Usted eligio Media Crema"<<endl;
		system("PAUSE");
		system("cls");
		prodd();
		break;
		case 2 :cout<<"Usted eligio Leche Nido"<<endl;
		system("PAUSE");
		system("cls");
		prodd();
		break;
		default : main();
		break;
	}
return(0);
}
int prodd()
{
	cout<<"Cuanto desea producir?"<<endl;
	cin>>cant;
	if(cant<10000)
	{
		cout<<"La cantidad minima es 10,000"<<endl;
		system("PAUSE");
		system("cls");
		prodd();
	}
	else
	{
		while(i<=cant)
		{
			x=rand()%(200);
			cal=cal+x;
			calidades[1][j]=i;
			i++;
			j++;
			cout<<calidades[1][j]<<endl;
		}
	}
	cout<<"El total de calidad fue: "<<cal<<endl;
	return(0);
}
