#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int opc,product,cant,cal,n;
int prodd();
int b,m,a,bu,es,f;
int main()
{
	cout<<"�Que producto deseas producir?"<<endl;
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
	cout<<"�Cuanto desea producir?"<<endl;
	cin>>cant;
	if(cant<10000)
	{
		cout<<"La cantidad minima es 10,000"<<endl;
		system("PAUSE");
		system("cls");
		prodd();
	}
	return(0);
}
