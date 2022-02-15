#include <iostream>
using namespace std;

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
    cout << array[i] << " ";
  cout << endl;
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








