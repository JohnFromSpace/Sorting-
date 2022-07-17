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
