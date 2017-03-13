//
// Created by kevin on 09/03/17.
//

#ifndef ARREGLOSPAGINADOS_FILEMANAGER_H
#define ARREGLOSPAGINADOS_FILEMANAGER_H


#include <iostream>
#include <string>
#include <fstream>
#include "MyList.h"

using namespace std;


class FileManager {
public:
    string line;
    MyList lista;
    MyList listaOrd;
    FileManager(string txt);
    string getLine();
    void StringCutter(string s);
    void makeArray(int a[],MyList ml);
    void makeSortedList (int a[], int lenght);
    void InsertionSort(int a[], int length);
    void SelectionSort(int arr[], int length);
    int partition(int arr[],int first,int last);
    void QuickSort(int arr[],int first,int last);
    void GetUserInput(int arr[], int length);
    void createFile(MyList ml);

};


#endif //ARREGLOSPAGINADOS_FILEMANAGER_H
