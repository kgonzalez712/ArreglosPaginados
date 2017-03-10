#include <iostream>
#include "PagedArray.h"

using namespace std;

int main() {
    //const amount_of_numbers = 256*6;
    //const amount_of_numbers_page=256;
    //const int size_of_memory= amount_of_numbers * sizeof(int);
    //const int size_of_page= amount_of_numbers_page * sizeof(int);

    //int* memory = (int*) malloc(size_of_memory);
    //int* page =  (int*) malloc(size_of_page);

    PagedArray p("/home/kevin/CLionProjects/ArreglosPaginados/test");
    return 0;
}