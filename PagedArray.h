//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_PAGEDARRAY_H
#define ARREGLOSPAGINADOS_PAGEDARRAY_H

#include <iostream>
#include <cmath>
#include "MyList.h"
#include "FileManager.h"

//
//const int amount_of_numebers = 256*6;
//const int amount_of_numbers_page = 256;
//
//const int size_of_memory = amount_of_numebers * sizeof(int);
//const int size_of_page = amount_of_numbers_page * sizeof(int);
//
//int* memory = (int*) malloc(size_of_memory);
//int* page = (int*) malloc(size_of_page);

using namespace std;
class PagedArray {

public:

    string address;
    PagedArray(string s);
    MyList l;
//    int operator [](int num);
//    int allocate(int* memory, int* page, int index);
//    void AddNumbers(MyList l);
//    int getNum(int* memory,int* page, int index);





    };

#endif //ARREGLOSPAGINADOS_PAGEDARRAY_H
