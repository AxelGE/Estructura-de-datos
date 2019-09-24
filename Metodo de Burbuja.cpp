#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int opc;
	int intercambio, tam;
	cout << "Cuantos numeros decea ordenar" << endl;
	cin >> tam;
	int numero[tam];
	for (int i = 0; i < tam; i++) {
		cout << "Ingrese el numeros--> " << i + 1 << endl;
		cin >> numero[i];}
	for (int i = 0; i < tam; i++){
		for (int j =0; j < tam; j++){
			if (numero[j] < numero[j+1]){
				intercambio = numero[j];
				numero[j] = numero[j+1];
				numero[j+1] = intercambio;}}}
	cout << "Escoja ordenar los numeros de manera Descendente =1 ascendente=2, " << endl;
	cin >> opc;
	switch (opc) {
	case 1: {
		for (int i = 0; i < tam; i++){
			cout << numero[i] << " ";
			}
		break;}
	case 2: {
		for (int i = tam-1; i >= 0; i--){
			cout << numero[i] << " ";}
		break;
	}}
	return 0;}



