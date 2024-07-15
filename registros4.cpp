//registros4.cpp
//Giorgini Disalvatore Pacci Perez
#include <iostream>
#include <conio.h>
#include <string>
using namespace std; 
    struct atleta{
        string nombre;
        string pais;
        string disciplina;
        int numMed;
    };
int main(){
    int n;
    cout<<"Digite el numero de atletas: ";cin>>n;

    atleta personas[n];
    for (int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Digite el Nombre: ";getline(cin,personas[i].nombre);
        cout<<"Digite el Pais: ";getline(cin,personas[i].pais);
        cout<<"Digite la disciplina: ";getline(cin,personas[i].disciplina);
        cout<<"Digite la cantidad de medallas: ";cin>>personas[i].numMed;
        cout<<endl;
    }
    
    string pais;
    cout<<"\tATLETAS REGISTRADOS SEGUN EL PAIS\n";
    cout<<"Digite un pais: ";cin>>pais;
    cout<<endl;
    int x=0,mayor=0,pos[n],y=0;
    for (int i=0;i<n;i++){
        if(pais.compare(personas[i].pais)==0){
            cout<<personas[i].nombre<<endl;
            x++;
        }
        if(personas[i].numMed>=mayor){
            mayor=personas[i].numMed;
            pos[y]=i;
            y++;
        } 
    }
    if(x!=0){
       cout<<x<<" Atletas que son de "<<pais; 
    }
    else{
        cout<<"No existen atletas registrados en ese pais\n";
    }
    cout<<endl;
    cout<<endl;
    cout<<"\tATLETA CON MAYOR NUMERO DE MEDALLAS\n"; 
    for(int i=0;i<y;i++){
        cout<<personas[pos[i]].nombre<< " con "<<mayor<<" medallas en la disciplina de "<<personas[pos[i]].disciplina<<endl;
    }
    
	return EXIT_SUCCESS;
}
