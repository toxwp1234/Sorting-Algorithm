#include <iostreaM>
#include <vector>

using namespace std;

//
vector<int> selection_sort(vector<int> arr ){

    int size_of_arr = arr.size();
    int min_id = 0;
    int curent = arr.at(0);
    int cur_min = arr.at(0);
    vector<int> sorted;
    for (int i=0;i<size_of_arr;i++){
        min_id = 0;
        curent = arr.at(0);
        cur_min = arr.at(0);
        
        for (int cur_id=0; cur_id<size_of_arr-i;cur_id++){
            curent=arr.at(cur_id);

            if(curent<cur_min){
                cur_min = curent;
                min_id = cur_id;
                
            };


        };
    sorted.push_back(arr.at(min_id));
    arr.erase(arr.begin()+min_id);
    };

    

    return sorted;


}






int main(){
    cout<<"fsdsfddddddddd\n";
    vector<int> lista = {
        42, 10, 7, 89, 5, 34, 23, 76, 99, 14, 58, 62, 80, 3, 17, 91, 45, 33, 50, 12,
        27, 38, 66, 85, 93, 16, 71, 9, 56, 31, 60, 48, 21, 75, 98, 6, 83, 55, 36, 25
    };
    vector<int> sort = selection_sort(lista);

    for (int num: sort){
        cout<<num<<" ";

    };
}