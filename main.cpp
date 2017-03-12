#include <iostream>
#include "PagedArray.h"

using namespace std;



//
//void allocate(int *memory, int *page, int index) {
//    int NumPag = (int) floor(index / amount_of_numbers_page);
//    for (int i=0; i<amount_of_numbers_page;i++){
//        int index2 = (NumPag * amount_of_numbers_page)+i;
//        page[i]=memory[index2];
//    }
//}
//
//int getNumero(int *memory, int *page, int index) {
//allocate(memory,page,index);
//return page[index % amount_of_numbers_page ];
//}

int main() {

     PagedArray p("/home/kevin/CLionProjects/ArreglosPaginados/test");
     cout<<p[4]<<endl;
    return 0;
}