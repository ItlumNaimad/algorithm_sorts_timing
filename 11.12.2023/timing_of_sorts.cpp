//
// Created by naima on 09.01.2024.
//

#include "timing_of_sorts.h"
void fillArrayFromFile(int* tablica, int indexes, const std::string& filename)
{
    std::fstream daneWejsciowe(filename);
    if(!daneWejsciowe.good())
    {
        std::cout<<"Nie udalo sie odczytac pliku"<<std::endl;
        return;
    }
    int liczba;
    int indeks = 0;
    while (daneWejsciowe >> liczba && indeks < indexes) {
        tablica[indeks] = liczba;
        indeks++;
    }
}

void timing_sort_algorithms(int indexes, const std::string& filename)
{
    int* tablica = new int[indexes];
    fillArrayFromFile(tablica, indexes, filename);
    unsigned int results1, results2, results3, results4, results5;
    std::cout<<"Algorytm babelkowy "<<std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    bubblesort(tablica, indexes);
    auto koniec = std::chrono::high_resolution_clock::now();
    auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(koniec - start);

    results1=elapsed1.count();
    std::cout<<"Algorytm Inserion Sort (wstawiania)"<<std::endl;
    start=std::chrono::high_resolution_clock::now();
    insertion_sort(tablica, indexes);
    koniec = std::chrono::high_resolution_clock::now();
    elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(koniec - start);
    results2=elapsed1.count();
    std::cout<<"Algorytm Selection Sort";
    start=std::chrono::high_resolution_clock::now();
    selectionSort(tablica, indexes);
    koniec = std::chrono::high_resolution_clock::now();
    elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(koniec - start);
    results3=elapsed1.count();
    std::cout<<"Algorytm QuickSort";
    start=std::chrono::high_resolution_clock::now();
    Quick_sort(tablica, 0, indexes-1);
    koniec = std::chrono::high_resolution_clock::now();
    elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(koniec - start);
    results4=elapsed1.count();
    std::cout<<"Inicjacja algorytmu MergeSort:";
    std::cout<<"Chwilowo brak tego algorytmu w bazie algorytmow sortowania :("<<std::endl;

    std::string danePomiaru = "Pomiary/" + std::to_string(indexes) + "_" +filename + "_pomiary.txt";
    std::ofstream outputFile(danePomiaru);

    outputFile << "Algorytm babelkowy: " << results1 << " ns\n";
    outputFile << "Algorytm Inserion Sort (wstawiania): " << results2 << " ns\n";
    outputFile << "Algorytm Selection Sort: " << results3 << " ns\n";
    outputFile << "Algorytm QuickSort: " << results4 << " ns\n";

    outputFile.close();

    delete[] tablica;

}