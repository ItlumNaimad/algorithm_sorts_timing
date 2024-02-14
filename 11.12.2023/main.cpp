#include <iostream>
#include "sort_alg.h"
#include "data_generating.h"
#include "timing_of_sorts.h"
#include <chrono>
#include <fstream>
using namespace std;
const int tab_elements = 500;
int main()
{
    /*
     * Komendy dla chrono:
     * Zaczyna mierzyć czas
     * auto start = std::chrono::high_resolution_clock::now();
     * Koniec pomiaru czasu:
     * auto koniec = std::chrono::high_resolution_clock::now();
     * Zapis wyniku do zmiennej w nanosekundach:
     * auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(koniec - start);
     * Podanie wyniku:
     *  printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
     */
    gen_collection();
    std::string filenames[] = {"optymistyczne.txt", "peymistyczne.txt", "losowe.txt"};
    int sizes[] = {5, 10, 25, 50, 100, 250, 500};

    for (const auto& filename : filenames) {
        for (const auto& size : sizes) {
            timing_sort_algorithms(size, filename);
        }
    }
    /*
     * cont auto& tworzy referencje do stałych oraz sam rozpoznaje
     * jaki typ zmiennej został użyty
     */


    std::cout<<"Inicjowanie zamkniecia programu";


    return 0;
}
