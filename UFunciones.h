//
// Created by Hilda Bermejo on 27/09/24.
//

#ifndef INC_06_MATRIZDECOINCIDENCIAS_UFUNCIONES_H
#define INC_06_MATRIZDECOINCIDENCIAS_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

int* *   dimensionar(int filas, int col);
void  llenardatos(int * *pMatriz,int  filas, int col);
void  imprimirMatriz(int **pMatriz, int filas, int col);
void  hallarCoincidencias(int **pM1, int ** pM2, int ** pM3, int filas, int col);
void  liberarMemoria(  int ** & pMatriz,  int filas,  int col);

#endif //INC_06_MATRIZDECOINCIDENCIAS_UFUNCIONES_H
