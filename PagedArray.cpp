//
// Created by kevin on 09/03/17.
//
#include "PagedArray.h"


PagedArray::PagedArray(string s) {
    const int amount_of_numbers = 256*6;
    const int amount_of_numbers_page = 256;

    const int size_of_memory = amount_of_numbers * sizeof(int);
    const int size_of_page = amount_of_numbers_page * sizeof(int);

    int* memory = (int*) malloc(size_of_memory);
    int* page = (int*) malloc(size_of_page);
    pag=page;
    mem=memory;
    Npages=amount_of_numbers_page;
    Nnumbers=amount_of_numbers;
    address = s;
    FileManager file(address);
    l = file.listaOrd;
    length=l.getLenght();
    cout<<l.getLenght()<<endl;
    PagedArray::AddNumbers(l);



}


int PagedArray::allocate(int *memory, int *page, int index) {
    int NumPag = (int) floor(index / Npages);
    for (int i=0; i<Npages;i++){
        int index2 = (NumPag * Npages)+i;
        page[i]=memory[index2];
    }
}

void PagedArray::AddNumbers(MyList l){
    for (int i=0; i<l.getLenght();i++){
        mem[i]=l.getNodeData(i);
        cout<<"value added to page"<<endl;
    }
}

int PagedArray::operator[](int num) {
    return PagedArray::getNum(mem, pag,num);

}

int PagedArray::getNum(int *memory, int *page, int index) {
    PagedArray::allocate(mem,pag,index);
    return page[index % Npages];
}
