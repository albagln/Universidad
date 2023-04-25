#pragma once
#include <fstream>
//HAY QUE UNIR LAS DOS RAMAS??
#include "listaPosiciones.h"
//#include "reglasjuego.h"
using namespace std;
typedef struct {
	tTablero tablero;
	tListaPosiciones listaBombillas;
	int nivel;
} tPartida;


void iniciaPartida(tPartida& partida);
void cargarPartida(ifstream& archivo, tPartida& partida);
bool operator<(const tPartida& partida, int nivel);
bool operator<(const tPartida& partida1, const tPartida& partida2);
bool juega(tPartida& partida, int& nIt);
void guardarPartida(ofstream& archivo, const tPartida& partida);
void destruyePartida(tPartida& partida);