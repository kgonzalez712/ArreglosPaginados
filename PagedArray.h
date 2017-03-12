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
class PagedArray {

public:
    PagedArray(string s);
    string address;
    MyList l;
    int* mem;
    int* pag;
    int Npages;
    int Nnumbers;
    int length;
    int operator [](int num);
    int allocate(int* memory, int* page, int index);
    void AddNumbers(MyList l);
    int getNum(int* memory,int* page, int index);





    };

#endif //ARREGLOSPAGINADOS_PAGEDARRAY_H
