#include <iostream>
#include<conio.h>
#include"fibonacci.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cantidad_n;
	
	cout<<"LOS NUMEROS SE PRESENTAN EN LA SERIE FIBONACCI.\n";
	do{
		cout<<"Ingrese el numero de elementos que desea ver: ";
		cin>>cantidad_n; cout<<endl;
	}while(cantidad_n <= 0);
	
	cout<<"La serie Fibonacci, con esa cantidad de numeros es: "<<endl;
	for(int i=0; i<cantidad_n; i++){
		cout<<fibonacci(i)<<" , ";
	}
	
	getch();
	return 0;
}


