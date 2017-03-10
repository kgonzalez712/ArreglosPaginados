//
// Created by kevin on 09/03/17.
//

#include "MyList.h"

MyList::MyList() {
    head=NULL;
    current=NULL;
    temp=NULL;
}

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
void MyList::PrintList() {
    current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }

}

int MyList::getLenght(){
    current=head;
    int i=0;
    while(current!=NULL){
        i++;
        current=current->next;
    }
    return i;

}


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

void MyList::changeData(int index, int value) {
    current=head;
    for (int i=0; i!=index;i++){
        current->next==current;
    }
    current->data=value;
}




