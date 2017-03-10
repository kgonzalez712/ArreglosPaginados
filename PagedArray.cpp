//
// Created by kevin on 09/03/17.
//
#include "PagedArray.h"


PagedArray::PagedArray(string s) {
    string address = s;
    FileManager file(address);
    file.listaOrd = l;
}

//
//int PagedArray::allocate(int *memory, int *page, int index) {
//    int NumPag = (int) floor(index / amount_of_numbers_page);
//    for (int i=0; i<amount_of_numbers_page;i++){
//        int index2 = (NumPag * amount_of_numbers_page)+i;
//        page[i]=memory[index2];
//    }
//}
//
//void PagedArray::AddNumbers(MyList l){
//    for (int i=0; i,l.getLenght();i++){
//        memory[i]=l.getNodeData(i);
//    }
//}
//
//int PagedArray::operator[](int num) {
//    return PagedArray::getNum(memory, page,num);
//
//}
//
//int PagedArray::getNum(int *memory, int *page, int index) {
//    PagedArray::allocate(memory,page,index);
//    return page[index % amount_of_numbers_page ];
//}
