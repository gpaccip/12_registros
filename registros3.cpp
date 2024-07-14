//registros3.cpp
//Giorgini Disalvatore Pacci Perez

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
struct persona{
    char nombre[40];
    int diaNa;
    int mesNa;
	int anoNa;
};

int main(){
    int n;
    cout<<"Digite la cantidad de personas: ";cin>>n;
    persona personas[n];

    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Digite un Nombre: "; cin.getline(personas[i].nombre,30,'\n');
        cout<<"Digite su dia de nacimiento: ";cin>>personas[i].diaNa;
        cout<<"Digite su mes de nacimiento: ";cin>>personas[i].mesNa;
        cout<<"Digite su ano de nacimiento: ";cin>>personas[i].anoNa;
        cout<<endl;
    }
    cout<<"\tREGISTRO DE PERSONAS\n";

    for(int i=0;i<n;i++){
        cout<<"Nombre: "<<personas[i].nombre;
        cout<<endl;
        cout<<"Dia de nacimiento: "<<personas[i].diaNa<<endl;
        cout<<"Mes de nacimiento: "<<personas[i].mesNa<<endl;
        cout<<"Ano de nacimiento: "<<personas[i].anoNa<<endl;
    }
    int mes;
    cout<<endl;
    cout<<"\tPERSONAS QUE ESTAN DE CUMPLE EN UN MES\n";
	cout<<"(cualquier numero fuera del rango[1-12] cerrara el programa)\n";

    do{
	
    cout<<"Digite el mes: ";cin>>mes;
  
    for(int i=0;i<n;i++){
        if(personas[i].mesNa==mes){
            cout<<personas[i].nombre<<"\n";
        }
        else{
            cout<<"El registro esta vacio, nadie cumple en ese mes\n";
        }
    }
    }while(mes>0&&mes<=12);
	return EXIT_SUCCESS;
}