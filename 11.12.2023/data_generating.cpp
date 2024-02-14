//
// Created by naima on 15.12.2023.
//

#include "data_generating.h"
void gen_collection()
{
    srand(time(nullptr));
    // Tworzenie obiektu ofstream i otwarcie pliku do zapisu
    std::ofstream optymistyczne("dane/optymistyczne.txt");

    if (optymistyczne.is_open())
    {
    for (int i = 1; i <= 500; i++)
    {
    optymistyczne << i << std::endl;
    // Zapis liczby do pliku, każda liczba w nowej linii
    }
        std::cout << "Plik zostal utworzony i zapisano liczby od 1 do 500." << std::endl;
    optymistyczne.close();  // Zamknięcie pliku po zapisie
    } else
    {
        std::cout << "Nie udalo sie otworzyc pliku do zapisu." << std::endl;
    }
    //generowanie losowego układu
    std::ofstream losowe("dane/losowe.txt");
    srand(time(nullptr));
    if (losowe.is_open())
    {
        for (int i = 1; i <= 500; i++)
        {
            losowe << rand()%500+1 << std::endl;
            // Zapis liczby do pliku, każda liczba w nowej linii
        }
        std::cout << "Plik zostal utworzony i zapisano liczby od 1 do 500." << std::endl;
        losowe.close();  // Zamknięcie pliku po zapisie
    } else
    {
        std::cout << "Nie udalo sie otworzyc pliku do zapisu." << std::endl;
    }
    // generowanie pesymistycznego układu danych
    std::ofstream pesymistyczne("dane/peymistyczna.txt");
    if (pesymistyczne.is_open())
    {
        for (int i = 500; i >= 1; i--)
        {
            pesymistyczne << i << std::endl;
            // Zapis liczby do pliku, każda liczba w nowej linii
        }
        std::cout << "Plik zostal utworzony i zapisano liczby od 1 do 500." << std::endl;
        pesymistyczne.close();  // Zamknięcie pliku po zapisie
    } else
    {
        std::cout << "Nie udalo sie otworzyc pliku do zapisu." << std::endl;
    }

}