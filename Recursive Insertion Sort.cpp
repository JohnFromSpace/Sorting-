#include <iostream>

void print(int arr[], int n){
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void recursiveInsertionSort(int arr[], int n){
  if(n <= 1){
    return;
  }
  
  recursiveInsertionSort(arr, n - 1);
  
  int last = arr[n - 1];
  int j = n - 2;
  
  while(j >= 0 && arr[j] > last){
    arr[j + 1] = arr[j];
    j = j - 1;
  }
  arr[j + 1] = last;
}

int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    recursiveInsertionSort(arr, n);
    print(arr, n);
  
    return 0;
}
