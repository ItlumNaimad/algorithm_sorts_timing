//
// Created by naima on 09.01.2024.
//

#ifndef INC_11_12_2023_TIMING_OF_SORTS_H
#define INC_11_12_2023_TIMING_OF_SORTS_H
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>
#include "sort_alg.h"

void timing_sort_algorithms(int indexes, const std::string& filename);
void fillArrayFromFile(int* tablica, int indexes, const std::string& filename);
#endif //INC_11_12_2023_TIMING_OF_SORTS_H
