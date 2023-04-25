
#include "listaPosiciones.h"
using namespace std;

void iniciaListaPosiciones(tListaPosiciones& lp) {
	lp.cont = 0;
	lp.size = DIM;
	//crear array lp
}
void destruyeListaPosiciones(tListaPosiciones& lp) {
	//for (int i = 0; i < lp.cont; i++) {
		delete lp.arrayPos;
	//}
		lp.cont = 0;
}

void insertar(tListaPosiciones& lp, const tPosicion& pos) {
	if (lp.cont >= lp.size){
		tListaPosiciones* aux = new tListaPosiciones[2*lp.size];//que cojones le pasa me quiero morir
		aux->size = 2 * lp.size;


		//copiamos el array
		for (int i = 0; i < lp.size; i++) {
			aux->arrayPos[i] = lp.arrayPos[i];
		}
		aux->cont = lp.cont;
		delete[] lp.arrayPos;
		
		for (int i = 0; i < aux->size; i++) {
			lp.arrayPos[i] = aux->arrayPos[i];
		}
		lp.cont = aux->cont;
		lp.size = aux->size;
		
		delete[] aux;
	}
	lp.arrayPos[lp.cont] = pos;
	

}

int dameNumElem(const tListaPosiciones& lp) {
	return lp.cont;
}
tPosicion dameElem(const tListaPosiciones& lp, int i) {
	return lp.arrayPos[i];
}
void guardarListaBombillas(ofstream& archivo, const tListaPosiciones& lp) {
	archivo << lp.cont<<endl;
	for (int i = 0; i < lp.cont; i++)
		guardarPosicion(archivo,lp.arrayPos[i]);
}

