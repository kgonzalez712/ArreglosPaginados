//
// Created by kevin on 09/03/17.
//

#include "MyList.h"

MyList::MyList() {
    head=NULL;
    current=NULL;
    temp=NULL;
}

/**
 * Este metodo se encarga de agregar un nuevo nodo a la lista, este contiene el dato, en este caso un entero
 * @param addData recibe el entero
 */
void MyList::addNode(int addData) {
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if (head!=NULL){
        current = head;
        while(current->next != NULL){
            current= current->next;
        }
        n->posc = current->posc+1;
        current->next=n;
    }
    else{
        head=n;
    }
    cout<<"Value added to the list"<<endl;
}

/**
 * Este metodo elimina un nodo de la lista segun el dato
 * @param delData
 */
void MyList::deleteNode(int delData){
    nodePtr delPtr =NULL;
    temp=head;
    current=head;
    while(current!= NULL && current->data !=delData){
        temp=current;
        current=current->next;
    }
    if(current==NULL){
        cout<<" was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr=current;
        current=current->next;
        temp->next=current;
        if(delPtr == head){
            head=head->next;
            temp=NULL;
        }
        cout<<"The value " << delData << "was deleted\n";
    }
}

/**
 * Este metodo imprime la lista
 */
void MyList::PrintList() {
    current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }

}
/**
 * Este metodo retorna el largo de la lista
 * @return
 */
int MyList::getLenght() {
    int i = 0;
    current = head;
    while (current != NULL) {
        i++;
        current = current->next;
    }
    return i;
}

/**
 * Este metodo recibe un entero como indece, se ubica en el subindece de la liste y obtiene el dato almacenado en el nodo
 * @param x
 * @return
 */
int MyList::getNodeData(int x){
    current=head;
    while(current != NULL){
        if (current->posc == x){
            cout<<current->data<<endl;
            return current->data;
        }
        else{
            current=current->next;
        }
    }
    cout<<"Posicion fuera de la lista"<<endl;
}
/**
 * Este metodo recibe un indice y valor y sustituye el valor del subindice del nodo con el parametro
 * @param index
 * @param value
 */
void MyList::changeData(int index, int value) {
    current=head;
    for (int i=0; i!=index;i++){
        current->next==current;
    }
    current->data=value;
}
/**
 * Este metodo elimina un elemento por indice
 * @param index
 */
void MyList::deleteNodeByIndex(int index){
    current=head;
    temp=head;
    nodePtr delPtr=NULL;
    for (int i=0; i!=index;i++){
        temp=current;
        current=current->next;
    }
    delPtr=current;
    current=current->next;
    temp->next=current;
    if(delPtr == head){
        head=head->next;
        temp=NULL;
    }

}




