#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>&arr,int i, int n){
    int ojciec = i; 
    int left_child = 2*i+1;
    int right_child =2*i+2;
    int temp;
    

if(right_child<n and arr.at(right_child)> arr.at(ojciec)){
    ojciec = right_child;

}

if(left_child<n and arr.at(left_child)> arr.at(ojciec)){
    ojciec = left_child;
}

if (ojciec != i) {
    temp = arr.at(i);
    arr.at(i) = arr.at(ojciec);
    arr.at(ojciec) = temp;
    heapify(arr,ojciec,n);
}
}

void heap(vector<int>&arr){
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, i, n);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    int temp;
    heap(arr); //ustawiam stos
   //zmniejszam ilosc elementów w stercie po ussunięciu
    for (int i = n - 1; i > 0; i--) {
//zerowy element to najwiekszy --> leci na koniec stery i zmniejszam promień heapify do i = n-k, gdzie k to liczba liczb posortowancth

        temp = arr[0];
        arr[0]=arr[i];
        arr[i]=temp;


        // Call heapify on the reduced heap
        heapify(arr, 0, i);
    }
}

int main() {

    vector<int> lista = {1, 0, 3, 4,3,4,21,100,1,2,3,7,777,0,-1};
    
    heapSort(lista);
    cout << endl;
    for (int a : lista) {
        cout << a << " ";  
    }
    cout << endl;

    return 0;
}
