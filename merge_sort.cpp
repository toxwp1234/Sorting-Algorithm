#include <iostream>
#include <vector>

//


/// @brief   Funkcja łącząca wkładam dwa wektory które są posortowane i łacze je aby otrzymać więszky posortowany


/// @param left :: lewy wektor który sie skala 
/// @param right :: prawy wektor który się skala 
/// @return :: oddaje połaczony i posegregowaną liste 



std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
    std::vector<int> merged;
    int size_l = left.size();
    int size_r = right.size();
    int i = 0, j = 0;

    while (i < size_l && j < size_r) {
        // Dodaje do pustego wektora kolejne liczby
        if (left.at(i) <= right.at(j)) {
            merged.push_back(left.at(i));
            i++;
        } else {
            merged.push_back(right.at(j));
            j++;
        }
    }

    // Dodanie pozostałych elementów
    while (i < size_l) {
        merged.push_back(left.at(i));
        i++;
    }
    while (j < size_r) {
        merged.push_back(right.at(j));
        j++;
    }

    return merged;
}

// Funkcja sortująca

/// @brief Funkcja rozdrabniająca na mniejsze podwektory
/// @param vec :: wejściowy wektor który jest łamany na dwie częsci przez środek
/// @return powracam rekurencyjnie wektor który łaczony jest przez rozbicie go na kawałki


/// @example ::: wektor = {3,4,2,1} --> {3,4} {2,1} --> {3},{4} | {2},{1} --> {3,4} , {1,2} --> {1,2,3,4 }



std::vector<int> mergeSort(std::vector<int> vec) {
    if (vec.size() <= 1) return vec;

    int mid = vec.size() / 2;
    std::vector<int> left(vec.begin(), vec.begin() + mid);
    std::vector<int> right(vec.begin() + mid, vec.end());

    return merge(mergeSort(left), mergeSort(right));
}

int main() {
    std::vector<int> lista = {2, 1, 3, 5, 0, 4};
    lista = mergeSort(lista);

    for (int a : lista) {
        std::cout << a << " ";
    }

    return 0;
}
