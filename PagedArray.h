//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_PAGEDARRAY_H
#define ARREGLOSPAGINADOS_PAGEDARRAY_H

#include <iostream>
#include <cmath>
#include "MyList.h"
#include "FileManager.h"

using namespace std;
/**
 * Declaracion de la clase PagedArray
 */
class PagedArray {

public:
    /**
     * Declaracion de atributos de la clase
     */
    PagedArray(string s);
    string address;
    MyList l;
    int* mem;
    int* pag;
    int Npages;
    int Nnumbers;
    int length;
    /**
     * Declaracion de metodos de la clase
     */
    int operator [](int num);
    int allocate(int* memory, int* page, int index);
    void AddNumbers(MyList l);
    int getNum(int* memory,int* page, int index);





    };

#endif //ARREGLOSPAGINADOS_PAGEDARRAY_H
