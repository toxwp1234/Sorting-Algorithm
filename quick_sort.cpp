#include <iostream>
#include <vector>

using namespace std;

void qSort(vector<int>& arr, int start, int end) {
    if (start >= end) { return; }

    int i = start;
    int j = end - 1;
    int pivot = arr.at(end);
    int temp;

    while (i <= j) {
        while (i <= j && arr.at(i) < pivot) { i++; }
        while (i <= j && arr.at(j) > pivot) { j--; }

        if (i <= j) {
            temp = arr.at(i);
            arr.at(i) = arr.at(j);
            arr.at(j) = temp;
            i++;
            j--;
        }
    }
    //swap
    temp = arr.at(i);
    arr.at(i) = arr.at(end);
    arr.at(end) = temp;

    if (start < i - 1){ qSort(arr, start, i - 1);};
    if (i + 1 < end) {qSort(arr, i + 1, end);};
}

int main() {
    vector<int> lista = 
    
   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    
    ;
    qSort(lista, 0, lista.size() - 1);
    for (int a : lista) { cout << a << " "; }
    cout << "\n";

    return 0;
}
