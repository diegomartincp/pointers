//
// Created by Diego Martín Campos on 01/10/2020.
//

#include <iostream>
struct vox{
    int v;
    vox *sgt;
};

vox *i; //i de in
vox *f; //f de fin
vox *aux; //creamos el auxiliar

void eQ(int x){ //Donde x es la información que almacenamos en nuestra estructura tipo vox
    //Preguntamos si la cola está llena o vacía
    if(f==NULL){    //Si está vacía
        vox *k = new vox;
        k->v=x;
        k->sgt=NULL;
    }
}

int main{

};