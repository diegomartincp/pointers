#include <iostream>
using namespace std;

struct box {
    char name;
    int exp;
    date cumple;
    box *sgt;
};
struct date{
    int dia;
    int mes;
    int ano;
};

box *i,*f=NULL;
box *a;

void eQ(char d, int b, date c){
    if(f==NULL){
        box *a=new box;
        a->name=d;
        a->exp=b;
        a->date=c;
        a->sgt=NULL;
        f=a;i=f;
    }else{
       box *a= new box;
       f->sgt=d;
       a->name=a;
       a->exp=b;
       a->date=c;
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
            cout << a->v << " -> ", a = a->sgt;
}
int main(){
    int op, x;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Ingresa el valor a insertar en el Stack : ??  ",cin>>x;
                eQ(x);
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
