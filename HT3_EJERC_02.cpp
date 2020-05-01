/*Ejercicio # 2:
En la Pizzeria "Gran sabor" se tienen las siguientes ofertas:
Por la compra de una pizza grande (Q80.00), recibe un descuento de 10%
Por la compra de una pizza familiar (Q115.00), recibe un descuento de 15%
Por la compra de una pizza fiesta(Q100.00), recibe un descuento de 20%

Solicitar el tipo de pizza, el precio unitario y hallar el precio a pagar.

Grabar los datos a un archivo y mostrar el total global de la venta del dia y
determinar el total de lo vendido por producto, mostrando tambien el porcentaje
con relacion al total.
*/

#include<fstream>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<stdio.h>
#include<string>

using namespace std;
void venta();
int main(){
	venta();
	return 0;
}

void venta(){
	int tipoprod;
	int tipo;
	float precio;
	int unidades;
	float descuento;
	float totalvta;
	
	cout<<"------Pizzeria <<Gran Sabor-------"<<endl;
	cout<<"ingrese el tipo de pizza. "<<endl;
	cout<<"pizza grande (80.00) -> 1 -Descuento 10%" <<endl;
	cout<<"pizza familiar  (125.00) -> 1 -Descuento 15%" <<endl;
	cout<<"pizza fiesta (100.00) -> 1 -Descuento 20%" <<endl;
	cin>>tipoprod;
	cout<<"indique el numero de unidades a comprar."<<endl;
	cin>>unidades;
	
	if (tipoprod==1){
		descuento=0.10;
		precio=80.00;
		totalvta=(precio-(precio*descuento))*unidades;	
	}
	if (tipoprod==2){
		descuento=0.15;
		precio=125.00;
		totalvta=(precio-(precio*descuento))*unidades;
	}
	if (tipoprod==3){
		descuento=0.20;
		precio=100.00;
		totalvta=(precio-(precio*descuento))*unidades;
	}
	cout<<tipoprod<<" "<<descuento<<" "<<precio<<" "<<unidades<<" "<<totalvta;
	
}


/*try
catcht(exception x)
cout<<"Error en la manipulacion"
*/

/*
struct pizzeria{
	int grande;
	int familiar;
	int fiesta;
};

void mp();
void calcular_grabar();
void leer_archivo();

void mp(){ // menu principal
	
	int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do{
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Realizar un pedido  "<<"\n";
		cout<<" 2 - leer el archivo "<<"\n";
		cout<<" 3 - Imprimir en pantalla el total global, total por producto y porcentaje  "<<"\n";
		cout<<" 4 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opción: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			calcular_grabar
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}
		else if (resp==3){		
			system("CLS");
			imprimir();
		}			
		else if (resp==4)
			break;
		else 
			break;
		
	} while(resp!=4);
}

void calcular_grabar(){
	float desc,
	float grande,
	float familiar;
	float fiesta;
	float precio;
	string tipo;
	ofstream archivo;
	for (int i==resp){
		cout<<"ingrese el tipo de pizza a pedir"; cin<<tipo;
	if ((tipo=="grande"||(tipo=="Grande")||("GRANDE"))
	}
	
	
		
	
}*/
