#include "colap.h"
#include<list>
#include<iostream>
using namespace std;


ColaPrioridad::ColaPrioridad(){
        Proceso p(0);
        buffer.push_front(p);
}

void ColaPrioridad:: adicionar(Proceso p){
        this->buffer.push_back(p);
}



void  ColaPrioridad:: retirar(){
        this->buffer.pop_back();
}


Proceso  ColaPrioridad::obtenerPrimero(){
        return this->buffer.back();
}


void ColaPrioridad :: mostrarse(){
        for(int i=0; i< this->buffer.size();i++){
                cout<< this->buffer[i];
        }
}



bool ColaPrioridad::estaVacia(){
        if(this->buffer.size()==0){
                return true;
        }
}


