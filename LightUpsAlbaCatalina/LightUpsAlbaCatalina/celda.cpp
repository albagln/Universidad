#include <iostream>
#include "celda.h"


using namespace std;



char celdaToChar(const tCelda& celda) {
	char c;
	if (celda.tipo == BOMBILLA) c = '*';
	else if (celda.tipo == PARED) c = celda.numBombillas;
	else if (celda.tipo == LIBRE) c = 'l';
	return c;
	/*
	if c 'l'{
	cout<<BG_WHITE<<WHITE<<".";
	*/
}

tCelda charToCelda(char c) {
	tCelda celda;
	int num = { 1,2,3,4,5,6,7,8,9 };
	if (c == '*')  celda.tipo = BOMBILLA;
	else if (c == 'X')	celda.tipo = PARED;
	else if (c == '.')	celda.tipo = LIBRE;
	else if (c == num) celda.tipo = PARED;

	return celda;
}

bool esPared(const tCelda& c) {
	bool pared;
	if (c.tipo == PARED) pared = true;
	else pared = false;
	return pared;
}
bool esParedRestringida(const tCelda& c) { //no seria mas facil invocar la funcion anterior en vez de hacerlo otra vez??
	bool pared;
	if (c.tipo == PARED && c.numBombillas != - 1) {
			pared = true;
	}
	else pared = false;
	return pared;
}
int numParedRestringida(const tCelda& c) { // same q en la anterior
	int num;
	if (c.tipo == PARED && c.numBombillas != -1) {
		num = c.numBombillas;
	}
	return num;
}
bool esBombilla(const tCelda& c) {
	bool bombilla;
	if (c.tipo == BOMBILLA) bombilla = true;
	else bombilla = false;
	return bombilla;
}
bool estaApagada(const tCelda& c) {
	bool apagada;
	if (c.tipo == LIBRE) {
		if (c.numBombillas == 0) {
			apagada = true;
		}
	}
	else apagada = false;
	return apagada;

}
bool estaIluminada(const tCelda& c) {
	bool iluminada;
	if (c.tipo == LIBRE) {
		if (c.numBombillas >> 0) {
			iluminada = true;
		}
	}
	else iluminada = false;
	return iluminada;
}
void apagaCelda(tCelda& c) {
	c.tipo = LIBRE;
	c.numBombillas = 0;
}
void actualizaIluminaciónCelda(tCelda& c, bool iluminar) {
	if (iluminar) {
		c.numBombillas += 1;
	}
	else c.numBombillas -= 1;
}
void ponBombilla(tCelda& c) {
	//if (c.tipo == LIBRE) {
		c.tipo = BOMBILLA;
	//}
}



