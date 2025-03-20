#include <iostream>

#include <vector>

using namespace std;

void insertion_sort(vector<int>&arr){


    int size_of_vector = arr.size();
    int actual_position;

    int a,b,c;

    if(size_of_vector == 1 || size_of_vector == 0){return;}


    for(int pos=0;pos<size_of_vector;pos++){
  
        actual_position = arr.at(pos);
        while (pos-1>=0 and pos<size_of_vector && actual_position<arr.at(pos-1)       )
        {
            /*
            a - to nasz indeks
            b- to indeks na który zmieniamy
            c - to pomocniczy
            */

        a = actual_position;
        b = arr.at(pos-1);
        arr.at(pos) = b;
        arr.at(pos-1) = a;
        // cout<< "zamieniam "<< a << "na" << b<<"\n";
        pos= pos - 1;





        }
        





    };





};




int main(){


    vector<int> lista =  {5};

    insertion_sort(lista);
    for (int a : lista){

        cout << a<<" ";

    };




    return 0;
};