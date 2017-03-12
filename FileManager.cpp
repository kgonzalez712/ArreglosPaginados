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
        FileManager::makeSortedList(array,lista.getLenght());
        int sorted_array[listaOrd.getLenght()];
        FileManager::makeArray(sorted_array,listaOrd);
        FileManager::createFile(sorted_array,listaOrd.getLenght());

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
void FileManager::makeSortedList(int *a, int length) {
    for (int i=0;i<length;i++){
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
    if(input=='s'){
        FileManager::SelectionSort(arr,lenght);
    }
    else{
        cout<< "Error incorrect input. Please type the corresponding letter: Insertion Sort(i)-Selection Sort(s)"<<endl;
        cin>>input;

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

void FileManager::SelectionSort(int *arr, int length)
{
//pos_min is short for position of min
    int pos_min,temp;

    for (int i=0; i < length-1; i++)
    {
        pos_min = i;//set pos_min to the current index of array

        for (int j=i+1; j < length; j++)
        {

            if (arr[j] < arr[pos_min])
                pos_min=j;
            //pos_min will keep track of the index that min is in, this is needed when a swap happens
        }

        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}

void FileManager::createFile(int *arr, int length) {
    ofstream outputFile;
    outputFile.open("/home/kevin/CLionProjects/ArreglosPaginados/result.txt");
    for(int i=0; i<length ; i++){
        outputFile << to_string(arr[i])+",";
    }

}

