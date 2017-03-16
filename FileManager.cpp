//
// Created by kevin on 09/03/17.
//
#include "FileManager.h"
/**
 * Constructor de la clase FileManager
 * @param txt Recibe fichero de texto
 */
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

    } else cout << "Unable to open file" << endl;
}
/**
 * Obtiene la linea de texto
 * @return Linea de texto
 */
string FileManager::getLine() {
    return line;
}
/**
 * Este metodo se encarga de leer el string y cortarlo cada vez que aparezca una coma (,)
 *
 * @param s String de texto
 */
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

/**
 * Este metodo recibe un Array vacio y una lista enlazada y crea un array donde se guardaran los numeros
 * @param a Array vacio donde se van a insertar los numeros
 * @param ml Lista enlazada
 */
void FileManager::makeArray(int *a, MyList ml) {
    for (int i=0; i<ml.getLenght();i++){
        a[i]= lista.getNodeData(i);
    }
}
/**
 * Este metodo recibe un Array vacio y un largo y crea una lista ordenada con los numeros
 * @param a
 * @param length
 */
void FileManager::makeSortedList(int *a, int length) {
    for (int i=0;i<length;i++){
        listaOrd.addNode(a[i]);
    }
}
/**
 * Este metodo se encarga de realizar el ordenamiento segun el input del usuario, recibe un array con los numeros del texto y el largo del array
 * @param arr los numeros del texto
 * @param lenght largo del array
 */
void FileManager::GetUserInput(int arr[],int lenght){
    char input;
    cout<<"Select Sorting Method, please type the corresponding letter: Insertion Sort(i)- Selection Sort(s)- QuickSort(q). TYPE HERE ->"<<endl;
    cin>>input;
    switch (input){
        case 'i':
            FileManager::InsertionSort(arr,lenght);
            break;
        case 's':
            FileManager::SelectionSort(arr,lenght);
            break;
        case 'q':
            FileManager::QuickSort(arr,0,lista.getLenght()-1);
            break;
        default: cout<<"Incorrect input, select Sorting Method, please type the corresponding letter: Insertion Sort(i)- Selection Sort(s)- QuickSort(q)"<<endl;


    }
}
/**
 * Este metodo ordena el arreglo utilizando insertion sort
 * @param arr
 * @param length
 */
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

/**
 * Este metodo ordena el arreglo utilizando Selection sort
 * @param arr
 * @param length
 */
void FileManager::SelectionSort(int *arr, int length)
{
    int pos_min,temp;

    for (int i=0; i < length-1; i++)
    {
        pos_min = i;
        for (int j=i+1; j < length; j++)
        {
            if (arr[j] < arr[pos_min])
                pos_min=j;
        }
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}
/**
 * Este metodo se encarga de realizar la particion del array para realizar el metodo quicksort
 * @param a
 * @param l
 * @param u
 * @return
 */
int FileManager::partition(int* a,int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
/**
 * Este metodo ordena el arreglo utilizando  Quick sort
 * @param arr
 * @param first
 * @param last
 */
void FileManager::QuickSort(int *arr, int first, int last) {
    int j;
    if(first<last)
    {
        j=partition(arr,first,last);
        QuickSort(arr,first,j-1);
        QuickSort(arr,j+1,last);
    }
}

/**
 * Este metodo recibe una lista y crea el archivo de salidad con los numeros ordenados
 * @param ml
 */
void FileManager::createFile(MyList ml) {
    ofstream outputFile;
    outputFile.open("/home/kevin/CLionProjects/ArreglosPaginados/result.txt");
    for(int i=0; i<ml.getLenght() ; i++){
        if (i==(ml.getLenght()-1)){
            outputFile << to_string(ml.getNodeData(i));

        }
        else outputFile << to_string(ml.getNodeData(i))+",";

    }

}

