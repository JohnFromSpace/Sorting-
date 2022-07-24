#include <iostream>

void swapping(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void display(int* array, int size)
{
  for(int i = 0; i < size; i++)
    std::cout << array[i] << " ";
  std::cout << std::endl;
}

void bubbleSort(int* array, int size)
{
  for(int i = 0; i < size; i++)
  {
    int swaps = 0; //flag to detect if any swap is there or not
    for(int j = 0; j < size - i - 1; j++)
    {
      if(array[j] > array[j + 1])//when the current element is bigger than the next one
      {
        swapping(array[j], array[j + 1]);
        swaps = 1; //set swap flag
      }
    }
    if(!swaps)
      break;//No swap in this pass, so array is sorted
  }
}

int main()
{
  int n;
  std::cout << "Enter the number of elements: ";
  std::cin >> n;
  
  int arr[n];//create an array with given number of elements
  std::cout << "Enter elements:" << endl;
  
  for(int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }
  
  std::cout << "Array before sorting: ";
  display(arr, n);
  
  bubbleSort(arr, n);
  
  std::cout << "Array after sorting: ";
  display(arr, n);
  
  return 0;
}
