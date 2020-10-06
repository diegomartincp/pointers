#include <iostream>
using namespace std;


struct date{
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


box *i,*f=NULL;
box *a;

void eQ(char d, int b, date c){
    if(f==NULL){
        box *a=new box;
        a->name=d;
        a->exp=b;
        a->cumple=c;
        a->sgt=NULL;
        f=a;i=f;
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
void dQ(){
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

void prt() {
    a = i;
    if (i == NULL)
        cout << "Vacia nada que imprimir";
    else
        while (a != NULL)
            cout << a->name << " -> ", a = a->sgt;
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
                cout<<"Ingresa el valor del nombre a insertar en el Stack : ??  ",cin>>d;
                cout<<"Ingresa el valor a del expediente insertar en el Stack : ??  ",cin>>b;
                cout<<"Ingresa el valor del día a insertar en el Stack : ??  ",cin>>c.dia;
                cout<<"Ingresa el valor del mes a insertar en el Stack : ??  ",cin>>c.mes;
                cout<<"Ingresa el valor del año a insertar en el Stack : ??  ",cin>>c.ano;
                
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
