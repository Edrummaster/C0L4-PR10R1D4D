#include <iostream>
#include "colap.h"
#include "proceso.h"
#include "unidadp.h"

using namespace std;

int main(){
	ColaPrioridad Cola;
	UnidadProcesamiento cpu;
	for (int i=0; i<10;i++){
		Proceso p(i);
		p.mostrarse();
		Cola.adicionar(p);
	}

	do{
		//Cola.mostrarse();
		Proceso q= Cola.obtenerPrimero();
		Cola.retirar();
		cpu.procesar(q);
		if(q.getEstado()!= "Finished"){
			Cola.adicionar(q);
		}

	}while(Cola.estaVacia()!= true);

	return 0;
}


