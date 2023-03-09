#pragma once
using namespace std;

const int MAX_FILAS = 5;
const int MAX_COLUMNAS = 5;

typedef struct {
    int nFilas, nColumnas;
    tCelda tablero[MAX_FILAS][MAX_COLUMNAS];
} tTablero;
