#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int opc,pos,aux;
	int intercambio, tam;
	cout << "Cuantos numeros decea ordenar" << endl;
	cin >> tam;
	int numero[tam];
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el numeros--> " << i + 1 << endl;
		cin >> numero[i];}
	for(int i=0;i<tam;i++){
		pos=i;
		aux=numero[i];
		while((pos>0) && (numero[pos-1]>aux)){
			numero[pos] = numero[pos-1];
			pos--;}
		numero[pos]= aux;}
	cout << "Escoja ordenar los numeros de manera ascendente=1, Descendente =2" << endl;
	cin >> opc;
	switch (opc) {
	case 1: {
		for (int i = 0; i < tam; i++){
			cout << numero[i] << " ";}
		break;	}
	case 2: {
		for (int i = tam-1; i >= 0; i--){
			cout << numero[i] << " ";}
		break;}	}
	return 0;}



