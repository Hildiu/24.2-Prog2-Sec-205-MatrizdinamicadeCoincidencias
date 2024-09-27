//
// Created by Hilda Bermejo on 27/09/24.
//

#include "UFunciones.h"


int* *   dimensionar(int filas, int col)
{
    int **pMatriz =nullptr;

    pMatriz = new int*[filas];
    for(int f=0; f<filas; f++)
        pMatriz[f] = new int[col];
    return pMatriz;

}

void  llenardatos(int * *pMatriz,int  filas, int col)
{
    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            pMatriz[f][c] = rand() % 7 + 1;

}

void  imprimirMatriz(int **pMatriz, int filas, int col)
{
    for(int f=0; f<filas;f++)
    {
        for(int c = 0; c<col; c++)
            cout << setw(5) << pMatriz[f][c];
        cout << "\n";
    }
}


void  hallarCoincidencias(int **pM1, int ** pM2, int ** pM3, int filas, int col)
{
   for(int f=0; f<filas; f++)
       for(int c=0; c<col; c++)
           if(pM1[f][c] == pM2[f][c])
               pM3[f][c] = 1;
           else
               pM3[f][c] = 0;

}


void  liberarMemoria(  int ** & pMatriz,  int filas,  int col)
{
    for(int f=0; f<filas; f++)
        delete []pMatriz[f];
    delete []pMatriz;
    pMatriz = nullptr;


}