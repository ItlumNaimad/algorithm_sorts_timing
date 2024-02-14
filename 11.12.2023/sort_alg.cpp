//
// Created by naima on 11.12.2023.
//

#include "sort_alg.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
// dodałem funkcję drukującą tablice
//bo często powtarzał się ten skrawek kodu

void bubblesort (int tab[], int size)
{
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if (tab[j]>tab[j+1]){
                swap(tab[j], tab[j+1]);
            }
        }
    }

}
void insertion_sort (int tab[], int size)
{
    int tmp;
    for (int i=1; i<size; i++){
        tmp=tab[i];
        int j=i-1;
        while (j>=0 && tmp<=tab[j])
        {
            tab[j+1]=tab[j];
            j--;
        }
        tab[j+1]=tmp;
    }

}

void Quick_sort(int arr[], int left, int right) {
    int i = (left + right) / 2;
    int pivot = arr[i];
    arr[i] = arr[right];
    int j = left;
    i = left;

    while (i < right) {
        if (arr[i] < pivot) {
            // SWAP
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j = j + 1;
        }
        i = i + 1;
    }

    arr[right] = arr[j];
    arr[j] = pivot;

    if (left < j - 1) {
        Quick_sort(arr, left, j - 1);
    }

    if (j + 1 < right) {
        Quick_sort(arr, j + 1, right);
    }
}

void selectionSort(int tab[], int size)
{
    int i, j, minIndex;
    for (i = 0; i < size - 1; i++)
    {
        //Szukanie najmniejszego elementu
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (tab[j] < tab[minIndex])
                minIndex = j;
        }
        //Jeśli znaleziono mniejszy element, to je zamień
        if (minIndex != i)
            swap(tab[minIndex], tab[i]);
    }

}
void mergeSort(int tab[], int size)
{
    int left=0;
    int right=size;
    int m=(left+right)/2;

}