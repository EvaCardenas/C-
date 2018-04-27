#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
int main() {
	int saldo_inicial = 17 ;
	int saldo,reintegro, opcion, agregar ;
	cout<<"Mi nombre es Salome :) ES UN GUSTO, tengo"<<endl;
	cout<<"n1.ingreso en cuenta"<<endl;
	cout<<"n2.Reintegro"<<endl;
	cout<<"n3.Ver saldo de cuenta"<<endl;
	cout<<"n0.salir"<<endl;
	cout<<"nOpcion"<<endl;
	cin>>opcion;
	if (opcion==1){
		cout<<"\ningrese su cantidad a depositar:";
		cin>>agregar;
		saldo = saldo_inicial + agregar;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
	}
	else if (opcion==2){
		cout<<"\nCuanta desea retirar:";
		cin>>reintegro;
		if(reintegro>17){
		 	cout<<"\nla cantidad digitada es mayor a 17,digite de nuevo la cantidad a retirar :";
		 	cin>>reintegro;
		}
		saldo = saldo_inicial - reintegro;
		cout<<"\nCantidad disponible en cuenta: "<<saldo;
	}
	else if (opcion==3){
		cout<<"\nUsted tiene de saldo :"<<saldo_inicial;
	}
	else if (opcion==0){
		cout<<"\nGracias por usar nuestro cajero:";
	}
	else {
		cout<<"\nSe a confundido de opcion menu";
	}
	cin.get();
	return 0;
}
