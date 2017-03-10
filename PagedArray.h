//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_PAGEDARRAY_H
#define ARREGLOSPAGINADOS_PAGEDARRAY_H

#include <iostream>
#include "MyList.h"
#include "FileManager.h"



class PagedArray {
public:
    string address;
    PagedArray(string s);
    MyList l;
    //int operator [](int num);
    //int allocate(int* memory, int* page, int index);


};

#endif //ARREGLOSPAGINADOS_PAGEDARRAY_H
