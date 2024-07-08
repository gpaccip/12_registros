//registros1.cpp
//Giorgini Disalvatore Pacci Perez 
#include<iostream>

using namespace std;
int main(){
	int n,menor=10000,m,ma,m1;
	struct empleado{
		char nombres[40],sexo[40];
		float sueldo;
	}empleados[50];
	cout<<"Digite la cantidad de trabajadores que hay: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Digite el nombre del trabajador: ";cin>>empleados[i].nombres;
		cout<<"Digite el sexo del trabajador: ";cin>>empleados[i].sexo;
		cout<<"Digite el sueldo del trabajador: ";cin>>empleados[i].sueldo;
		cout<<endl;	
		
		if(empleados[i].sueldo<menor){
			menor=empleados[i].sueldo;
			m=i;
	}
		else{
			ma=empleados[i].sueldo;
			m1=i;
	}
	}
	cout<<"El empleado con menor sueldo es: "<<empleados[m].nombres<<endl;
	cout<<"El empleado con mayor sueldo es: "<<empleados[m1].nombres;
		
	
	
	
	return 0;
}