#include<iostream>
using namespace std;
#define MAX 100
int main()
{
 char mensaje[MAX];
 int long_buffer=80;
 cout<<"A continuacion ingresa el mensaje: "<<endl;
 cin.getline(mensaje,long_buffer);
 cout<<"Tu mensaje es: "<<mensaje<<endl;
 return 0;
}
