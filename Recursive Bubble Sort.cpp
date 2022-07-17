#include <iostream>

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
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

int main(){
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  bubbleSort(arr, n);
  
  std::cout << "Sorted array looks like this: \n";
  print(arr, n);
  
  return 0;
}
