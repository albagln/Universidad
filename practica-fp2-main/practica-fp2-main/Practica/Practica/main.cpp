//ALBA GALIANO CAMPILLO -- CATALINA FULLANA MORA
#include <iostream>
#include <fstream>
#include "reglasJuego.h"
#include "listaPartidas.h"

using namespace std;


int  elegirPartida(const tListaPartidas& lp);

int main() {
    tTablero tablero;
    ifstream archivoEntrada;
    ofstream archivoSalida;
    tListaPartidas lp;
    int partida, nPasos;
    cargarListaPartidas(archivoEntrada, lp);
    iniciaListaPartidas(lp);
  
    partida = elegirPartida(lp);
    //juega(lp.datos[partida], nPasos);
    // 
    //if (estaTerminado(lp.datos[partida]))
        //eliminarPartida(lp,lp.datos[partida]);
    guardarListaPartidas(archivoSalida,lp);
    destruyeListaPartidas(lp);



   /*
    int a=0, b=0, numPasos = 1;

    archivoEntrada.open("tablero.txt");
    if (leerTablero(archivoEntrada, tablero)) {
        mostrarTablero(tablero);

// COMENTARIO CAMPUS CON && NO NOS VA
        while (!(estaTerminado(tablero) || esPosQuit(a, b))) {
            //cout << "Donde quieres poner la bombilla " << numPasos << "? ";
            cout << "Pos: ";
            cin >> a >> b;

            if (esPosReset(a, b)) {
                numPasos = 1;
            }

            ejecutarPos(tablero, a, b);
            mostrarTablero(tablero);
            numPasos++;
        }

        if (esPosQuit(a, b)) {
            cout << "Gracias por jugar, nos vemos a la proxima" << endl;
        }
        else {
            cout << "Has completado el juego" << endl;
            mostrarTablero(tablero);
        }
    }
    else cout << "problema en la carga del tablero";
    */
    return 0;

}
int elegirPartida(const tListaPartidas& lp) {
    int nivel, i=0;
    bool existe;
    cout << "�Que nivel quieres jugar? ";
    cin >> nivel;
    //buscar si hay una del nivel nivel
    //while (i < lp.nElem && nivel < lp.datos[i].nivel) {
        i++;
    //} 
    //indice = i;
    return nivel;
}
