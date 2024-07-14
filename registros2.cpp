//registros2.cpp
//Giorgini Disalvatore Pacci Perez 
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int p;
    cout <<"Digite cuantas personas se va a registrar: ";cin>>p;

    struct persona{
        char nombre[20];
        int DNI;
        int edad;
    }personas[p];

    for (int i=0;i<p;i++){
        fflush(stdin);//esto vaciara el buffer y nos permitira poner mas valores
        cout<<"Nombre: "; cin.getline(personas[i].nombre,20,'\n');
        cout<<"DNI(9 num): ";cin>>personas[i].DNI;
        cout<<"Edad: ";cin>>personas[i].edad;
        cout<<endl;
    }
    int mayores[p],k=0;
    float suma=0;
    for(int i=0;i<p;i++){
        if(personas[i].edad>=50){
            mayores[k]=i;
            k++;
        }
        suma=suma+(personas[i].edad);
    }
    float prom;
    cout<<"\tREGISTRO DE PERSONAS MAYORES DE 50\n";
    for(int i=0;i<k;i++){
        cout<<personas[mayores[i]].nombre<<"\n";
    }
    prom=(suma/p);
    cout<<"\nEl promedio de edades de todos es: "<<prom;
    cout<<endl;
    cout<<endl;
  	cout<<"\tREGISTRO DE DATOS\n";

 	for (int i=0;i<p;i++){
    	cout<<"Nombre: "<<personas[i].nombre<<"\n";
    	cout<<"DNI: "<<personas[i].DNI<<"\n";
    	cout<<"Edad: "<<personas[i].edad<<"\n\n";
  }
	return EXIT_SUCCESS;
}
