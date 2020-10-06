#include <iostream>
using namespace std;
struct vox{
    int v;
    vox *sgt;
};
vox *peek = NULL;
void push(int x){
   vox *nvox =  new vox;
   nvox->v=x,nvox->sgt=peek;
   peek=nvox;
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else
    peek=peek->sgt;
}
void prt(){
     vox *aux = peek;
     if(aux==NULL)
         cout<<"Nada que imprimir, Stack vacia\n";
     else
         while(aux!=NULL){
             cout<<aux->v<<" -> ";
             aux=aux->sgt;
         }
}
int main(){
    int op, x;
    do{
        cout<<"\n(1) Push    (2) Pop    (3) Print   (4) Salir \n ";
        cout<<"\n Elija ppcion  ?: ",cin>>op;
        switch (op){
            case 1:
                cout<<"Ingresa el valor a insertar en el Stack : ??  ",cin>>x;
                push(x);
                break;
            case 2:
                cout<<"Eliminando ..... : ";
                pop();
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

