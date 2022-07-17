#include <iostream>

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void insertionSort(int arr[], int n){
  for(int i = 1; i < n; i++){
    int tempElement = arr[i];
    j = i - 1;
    
    // Move elements of arr[0..i-1],  
    // that are greater than tempElement, to one 
    // position ahead of their 
    // current position
    while(j >= 0 && arr[j] > tempElement){
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = tempElement;    
  }
}
