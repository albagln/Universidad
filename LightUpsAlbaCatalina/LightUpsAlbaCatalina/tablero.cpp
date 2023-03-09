#include <iostream>
#include <fstream>
//#include "tablero.h"
#include "colores.h"
#include "celda.h"

using namespace std;



const int MAX_FILAS = 5;
const int MAX_COLUMNAS = 5;

typedef struct {
    int nFilas, nColumnas;
    tCelda tablero[MAX_FILAS][MAX_COLUMNAS];
} tTablero;

int getNumFilas(const tTablero& tab);
int getNumCols(const tTablero& tab) ;
tCelda celdaEnPos(const tTablero& tab, int x, int y);
void ponCeldaEnPos(tTablero& tab, int x, int y, const tCelda& c);
bool leerTablero(ifstream& archivo, tTablero& tab);
void mostrarTablero(const tTablero& tab);

//Como alternativa a las dos últimas funciones puedes sobrecargar los operadores ‘ >> ’ y ‘ << ’ :
ifstream& operator>>(ifstream& archivo, tTablero& tab);
ostream& operator<<(ostream& out, const tTablero& tab);

int getNumFilas(const tTablero& tab) {
    int num = tab.nFilas;  //esto esta mal seguro
    return num;
}
int getNumCols(const tTablero& tab) {
    int num = tab.nColumnas;  //esto esta mal seguro x2
    return num;
}
