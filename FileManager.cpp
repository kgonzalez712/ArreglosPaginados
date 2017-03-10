//
// Created by kevin on 09/03/17.
//
#include "FileManager.h"
FileManager::FileManager(string txt) {
    ifstream myfile(txt);
    if (myfile.is_open()) {
        cout << " File opened succesfully" << endl;
        getline(myfile, line);
        FileManager::StringCutter(line);
        int array[lista.getLenght()];
        FileManager::makeArray(array,lista);
        FileManager::GetUserInput(array,lista.getLenght());
        FileManager::makeSortedList(array);
        listaOrd.PrintList();
    } else cout << "Unable to open file" << endl;
}
string FileManager::getLine() {
    return line;
}
void FileManager::StringCutter(string s) {
    string temp="";
    int i=0;
    while(i <=(s.length()-1)){
        if (s[i]!=','){
            temp=temp+s[i];
            i++;
        }
        else {
            lista.addNode(stoi(temp));
            temp = "";
            i++;
        }
    }
    lista.addNode(stoi(temp));
}

void FileManager::makeArray(int *a, MyList ml) {
    for (int i=0; i<ml.getLenght();i++){
        a[i]= lista.getNodeData(i);
    }
}
void FileManager::makeSortedList(int *a) {
    for (int i=0;i<5;i++){
        listaOrd.addNode(a[i]);
    }
}

void FileManager::GetUserInput(int arr[],int lenght){
    char input;
    cout<<"Select Sorting Method, please type the corresponding letter: Insertion Sort(i)-Selection Sort(s)"<<endl;
    cin>>input;
    if(input=='i'){
        FileManager::InsertionSort(arr,lenght);
    }
    //if(input=='s'){
        //FileManager::SelectionSort(arr,lenght);
    //}
    else{
        cout<< "Error"<<endl;
    }
}

void FileManager::InsertionSort(int *arr, int length) {
    int j, temp;
    for (int i = 0; i < length; i++){
        j = i;
        while (j > 0 && arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

