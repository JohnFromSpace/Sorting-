#include <iostream>

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void bubbleSort(int arr[], int n){
  if(n == 1){
    return;
  }
  
  int counter = 0;
  
  //The largest number is moved to the end of the array.
  for(int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]){
      swap(arr[i], arr[i + 1]);
      counter++;
    }
  }
  
  //Check if any recursion is happening
  if(counter == 0){
    return;
  }
  
  //Largest element is fixed
  bubbleSort(arr, n - 1);
}
