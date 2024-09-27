#include "UFunciones.h"


int main()
{ int filas, col;
  int * *pM1= nullptr;
  int * *pM2= nullptr;
  int * *pM3= nullptr;

    srand(time(nullptr));
    cout << "Filas    : "; cin >> filas;
    cout << "Columnas : "; cin >> col;
    pM1 = dimensionar(filas, col);
    llenardatos(pM1, filas, col);
    imprimirMatriz(pM1, filas, col);
    cout << "\n\n";
    pM2 = dimensionar(filas, col);
    llenardatos(pM2, filas, col);
    imprimirMatriz(pM2,filas, col);
    cout << "\n\nMatriz de Coincidencias\n";
    pM3 = dimensionar(filas, col);
    hallarCoincidencias(pM1, pM2, pM3, filas, col);
    imprimirMatriz(pM3, filas, col);
    liberarMemoria(pM1, filas, col);
    liberarMemoria(pM2, filas, col);
    liberarMemoria(pM3, filas, col);
    return 0;
}
