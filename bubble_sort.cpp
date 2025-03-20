#include <iostream>
#include <vector>

using namespace std;



void bubble_sort(vector<int>&list){

    int n = list.size();
    if (n==1){return;};
    int here, there,temp;
    for (int num_of_numbers = n; num_of_numbers>0;num_of_numbers--){

        //cout << num_of_numbers;

        for(int i = 0; i+1<num_of_numbers;i++){

            temp,here = list.at(i);
            there = list.at(i+1);
            if(here>there){
                list.at(i) = there;
                list.at(i+1) = here;

            }






        }


    }





};




int main(){

    vector<int> lista = {{0, 0}};

    bubble_sort(lista);

    for (int a:lista){

        cout << a <<" ";



    };


};
