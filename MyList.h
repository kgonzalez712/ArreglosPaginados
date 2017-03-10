//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_MYLIST_H
#define ARREGLOSPAGINADOS_MYLIST_H


#include <string>
#include<iostream>

using namespace std;

class MyList {
private:
    typedef struct node{
        int data;
        node* next;
        int posc=0;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    MyList();
    int array[];
    void addNode(int addData);
    void deleteNode(int delData);
    void PrintList();
    int getLenght();
    int getNodeData(int x);


};


#endif //ARREGLOSPAGINADOS_MYLIST_H
