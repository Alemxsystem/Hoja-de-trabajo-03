/*
HOJA DE TRABAJO #3
Ejercicio # 1:
El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.*/

#include<fstream>
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<vector>
#include<string>
#include <iomanip>
using namespace std;

float sueldo_total;
vector<string>memoria;

struct jugadores{
	string nombre;
	int edad;
	string nacionalidad;
	
};

void cal_grabar(){
	jugadores fut;
	fflush(stdin);
	cout<<"Ingrese el nombre del jugador: "<<"\n"; getline(cin,fut.nombre);
	cout<<"Ingrese la edad del jugador: "<<"\n"; cin>>fut.edad;
	fflush(stdin);
	cout<<"Ingrese la nacionalidad del jugador: "<<"\n"; getline(cin,fut.nacionalidad);
	fflush(stdin);
	float sueldo;
	float sueldofijo=2500.00;

	if ((fut.nacionalidad=="Guate")||(fut.nacionalidad=="guate")||(fut.nacionalidad=="GUATE")){
			if((fut.edad>=15)&&(fut.edad<=20)){
			sueldo=(sueldofijo+1400.00);
		}
		else if((fut.edad>=21)&&(fut.edad<=25)){
			sueldo=(sueldofijo+1500.00);
		}
		else if((fut.edad>=26)&&(fut.edad<=30)){
			sueldo=(sueldofijo+1200.00);
		}
		else{
			sueldo=(sueldofijo+800.00);
		}
		
		sueldo_total+=sueldo;
		cout<<"Sueldo total pre"<<sueldo_total;
	}
	else {
		if((fut.edad>=15)&&(fut.edad<=20)){
			sueldo=((sueldofijo+500)+1400.00);
		}
		else if((fut.edad>=21)&&(fut.edad<=25)){
			sueldo=((sueldofijo+500)+1500.00);
		}
		else if((fut.edad>=26)&&(fut.edad<=30)){
			sueldo=((sueldofijo+500)+1200.00);
		}
		else{
			sueldo=((sueldofijo+500)+800.00);
		}
		sueldo_total+=sueldo;
	
		//grabando el archivo.
		
		ofstream miarchivo("jugadores.txt", std::ios::app);
		miarchivo << fut.nombre<<"\t"<<fut.edad<<"\t"<<fut.nacionalidad <<"\t"<< sueldo_total <<endl;
       
        
    	archivo.close();
		jugadores recordset_r[lineas];
		for (int i = 0; i < lineas; i++){
			miarchivo>>recordset_r[i].nombre>>recordset_r[i].edad>>recordset_r[i].nacionalidad>>recordset_r[i].sueldo_total;
		}
    	miarchivo.close();    
}

void leer_archivo(){
	cout << "lISTADO DE LOS JUGADORES" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "NOM"<< "\t" << "EDAD"<< "\t" << "NACIO"  << "\t" << "SUELTOT."<< endl;
	cout << "---------------------------------------------" << endl; 
	
	// Declarando variable
	ifstream miarchivo;
	miarchivo.open("jugadores.txt", std::ios::in);
	string line;
	
	while (getline(miarchivo,line)){
		cout<<line<<endl;
		memoria.push_back(line);
	}
	miarchivo.close();
	string empty;
	cin>>empty;
	return;
};

void planilla(){
	ifstream miarchivo;
	miarchivo.open("jugadores.txt", std::ios::in);
	string line;
	
	while (getline(miarchivo,line)){
		cout<<line<<endl;
		memoria.push_back(line);
	}
	miarchivo.close();
	string empty;
	cin>>empty;
	return;

};

int main() {
  int contador;
  char tecla;
  string empty;
  bool bandera=false;
  
  do
    {
        system("CLS");
        cout << "Calculo de salario de los jugadores." << endl;
        cout << "------------------------------------" << endl << endl;
        cout << "\t1 .- Ingresar jugador" <<endl;
        cout << "\t2 .- Leer archivo" <<endl;
        cout << "\t3 .- Mostrar total de salario" << endl;
        cout << "\t4 .- Salir" << endl << endl;
        cout << "------------------------------------" << endl;
        cout << "Elije una opcion: ";
 
        cin >> tecla;
 
		switch(tecla)
    		{
			case '1':
			 system("CLS");
		 	 cal_grabar();
        	 contador=contador+1;
        	 break;
 
			case '2':
			 system("CLS");
        	 leer_archivo();
        	 break;
      
      		case '3':
        	 system("CLS");
   			 cout << "Mostrar total de salario:" << "\n";
        	 cout << "$." <<sueldo_total;
        	 cin >> empty;
      		 break;

      		case '4':
			 bandera=true;
			 //exit(1);
			 break;
 
			default:
				system("CLS");
				cout << "Opcion no valida.\a\n";
				getchar();
        		getline(cin, empty);
				break;
		}
    }while(bandera!=true);
  
  return 0;
}


