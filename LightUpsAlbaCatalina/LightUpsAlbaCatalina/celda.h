#pragma once

using namespace std;

typedef enum tTipo { PARED, BOMBILLA, LIBRE };
typedef struct {
	tTipo tipo;
	int numBombillas;
	/*-1 significa que es una celda que no tiene restricción
	 del 0 al 4 indican el número de bombillas
	que la tienen que rodear*/
} tCelda;


bool esPared(const tCelda& c);
bool esParedRestringida(const tCelda& c);
bool esBombilla(const tCelda& c);
bool estaApagada(const tCelda& c);
bool estaIluminada(const tCelda& c);

void apagaCelda(tCelda& c);
void actualizaIluminaciónCelda(tCelda& c, bool iluminar);
void ponBombilla(tCelda& c);

int numParedRestringida(const tCelda& c);
char celdaToChar(const tCelda& celda);
tCelda charToCelda(char c);