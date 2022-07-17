#include <iostream>

void swap(int* xp, int* yp){
  int* tempp = *xp;
  xp* = yp*;
  yp* = temp;
}

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void selectionSort(int arr[], int n){
  int minIndex;
  for(int i = 0; i < n; i++){
    minIndex = i;
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(&arr[minIndex], &arr[i]);
  }
}
