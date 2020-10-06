#include <iostream>
using namespace std;


struct date{ //Creamos una estructura llamada "date" donde se almacena la fecha de nacimiento
    int dia;
    int mes;
    int ano;
};
struct box {
    char name;
    int exp;
    date cumple;
    box *sgt;
};


box *i,*f=NULL; //Creamos el inicio, el final y el auxiliar.
box *a;

void eQ(char d, int b, date c){ //Método para encolar
    if(f==NULL){    //NO HAY NADA EN LA COLA
        box *a=new box; //Asignamos espacio de memoria al puntero a
        a->name=d;      //rellenamos el nombre (char), expediente (int) y el cumpleaños (date)
        a->exp=b;
        a->cumple=c;
        a->sgt=NULL;    //El siguiente de "a" es nulo, pues está solo en la cola.
        f=a;i=f;        //El final es A, y el principio también pues está solo en la cola
    }else{
        box *a= new box;
        f->sgt=a;
        a->name=d;
        a->exp=b;
        a->cumple=c;
        a->sgt=NULL;
        f=a;
    }
}
void dQ(){ //Método para desencolar
    if(i==NULL)
        cout<<"Queue vacia";
    else if (i->sgt==NULL){
        cout<<"Eliminando";
        i=i->sgt;
        i=NULL;
        f=NULL;
    }else {
        cout << "Eliminando";
        i = i->sgt;
    }
}

void prt() { //Método para imprimir
    a = i;
    if (i == NULL)
        cout << "Vacia nada que imprimir";
    else
        while (a != NULL){
            cout << "\n"<<"Nombre: " << a->name << "\n";
            cout << "Expediente: " << a->exp << "\n";
            cout << "Fecha de nacimiento: "<< a->cumple.dia <<"/"<< a->cumple.mes <<"/"<< a->cumple.ano <<  " -> ";
            a = a->sgt;
        }

}
int main(){
    int op, b;
    char d;
    date c;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Ingresa el valor del NOMBRE a insertar en el Stack : ??  ",cin>>d;
                cout<<"Ingresa el valor a del EXPEDIENTE a insertar en el Stack : ??  ",cin>>b;
                cout<<"Ingresa el valor del DIA a insertar en el Stack : ??  ",cin>>c.dia;
                cout<<"Ingresa el valor del MES a insertar en el Stack : ??  ",cin>>c.mes;
                cout<<"Ingresa el valor del ANO a insertar en el Stack : ??  ",cin>>c.ano;

                eQ(d,b,c);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                dQ();
                break;
            case 3:
                cout<<"Imprimiendo..... : ";
                prt();
                break;
            case 4:
                cout<<"------Bye--------";
        }
    }while(op!=4);
}
