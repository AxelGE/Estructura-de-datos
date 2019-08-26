#include<iostream>
#include<stdlib.h>
using namespace std;
float a, b, c;
int main()
{
	cout << "Ingrese numero a: " <<endl;
	cin >> a;
	cout << "Ingrese numero b: " <<endl;
	cin >> b;
	c = a + b;
	system("cls");
	cout << "El resultado de " << a << " + " << b << " es igual a: " << c << endl;
	return(0);
}
