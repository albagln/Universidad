#include "partida.h"
#include <iostream>

using namespace std;


void iniciaPartida(tPartida& partida) {
	//crear array dinamico
}
void cargarPartida(ifstream& archivo, tPartida& partida) {
	char str;
	string nivel;
	archivo >> nivel>> partida.nivel;
	archivo >> partida.tablero.nFils >> partida.tablero.nCols;
	for (int i = 0; i < partida.tablero.nFils; i++){
		for (int j = 0; j < partida.tablero.nCols; j++) {
			archivo >> str;
			partida.tablero.tablero[i][j] = charToCelda(str);
		}
	}
	archivo >> partida.listaBombillas.cont;
	for (int i = 0; i < partida.listaBombillas.cont;i++) {
		archivo >> partida.listaBombillas.arrayPos[i].x;
		archivo >> partida.listaBombillas.arrayPos[i].y;
	}
	/*
	int numPartidas;
	archivo >> numPartidas;

	for (int i = 0; i < numPartidas;i++) {
		//guardar nivel
		partida[]
	}
	//num partidas
	// nivel
	//	num filas - columnas
	//	partidas
	//	bombillas
	archivo<<
	*/
}
bool operator<(const tPartida& partida, int nivel) {
	return partida.nivel < nivel;
}
bool operator<(const tPartida& partida1, const tPartida& partida2) {
	return partida1.nivel < partida2.nivel;
}
bool juega(tPartida& partida, int& nIt) {
	int a, b;
	//colocar bombillas almacenadas y iluminar diagonales
	// COMENTARIO CAMPUS CON && NO NOS VA
	while (!(estaTerminado(partida.tablero) || esPosQuit(a, b))) {
		cout << "Pos: ";
		cin >> a >> b;

		if (esPosReset(a, b)) {
			nIt = 1;
		}

		ejecutarPos(partida.tablero, a, b);
		mostrarTablero(partida.tablero);
		nIt++;
	}

	if (esPosQuit(a, b)) {
		cout << "Gracias por jugar, nos vemos a la proxima" << endl;

	}
	else{
		cout << "Has completado el juego" << endl;
		mostrarTablero(partida.tablero);
	}
	//guardar en listaBombillas posicion de bombillas y num
	return esPosQuit(a, b);
}
void guardarPartida(ofstream& archivo, const tPartida& partida) {
	archivo << partida.tablero.nFils << partida.tablero.nCols << endl;
	for (int i = 0; i < partida.tablero.nFils; i++) {
		for (int j = 0; j < partida.tablero.nCols; i++) {
			archivo << celdaToCharArchivo(partida.tablero.tablero[i][j])<< endl;
		}
	}
	archivo << partida.listaBombillas.cont << endl;
	for (int i = 0; i < partida.listaBombillas.cont;i++) {
		archivo << partida.listaBombillas.arrayPos->x<< partida.listaBombillas.arrayPos->y;
	}
}
void destruyePartida(tPartida& partida) {
	delete[] partida.listaBombillas.arrayPos;
	partida.listaBombillas.size = 0;
	partida.listaBombillas.cont = 0;
	partida.listaBombillas.arrayPos = nullptr;
}