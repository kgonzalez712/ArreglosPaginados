//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_MYLIST_H
#define ARREGLOSPAGINADOS_MYLIST_H


#include <string>
#include<iostream>

using namespace std;
/**
 * Declaracion de la clase MyList
 */
class MyList {
/**
 * Declaracion del struct node
 */
    typedef struct node{
        int data;
        node* next;
        int posc=0;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    /**
 * Declaracion de metodos de la clase
 */
    MyList();
    void addNode(int addData);
    void changeData(int index, int value);
    void deleteNode(int delData);
    void deleteNodeByIndex(int index);
    void PrintList();
    int getLenght();
    int getNodeData(int x);


};


#endif //ARREGLOSPAGINADOS_MYLIST_H
