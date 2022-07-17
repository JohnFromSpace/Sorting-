# Sorting-
A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements.

## 1. Selection Sort 
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The         algorithm maintains two subarrays in a given array.
  1) The subarray which is already sorted. 
  2) Remaining subarray which is unsorted.
  In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
  
  ![image](https://user-images.githubusercontent.com/96446768/179427157-458a5678-1b7f-457a-824b-75160bef34c0.png)

## 2. Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.</br>
  **Example:**</br> 
  **First Pass:**</br> 
  ( **5 1** 4 2 8 ) –> ( **1 5** 4 2 8 ),</br> 
  Here, algorithm compares the first two elements, and swaps since 5 > 1.</br> 
  ( 1 **5 4** 2 8 ) –>  ( 1 **4 5** 2 8 ), </br>
  Swap since 5 > 4 </br>
  ( 1 4 **5 2** 8 ) –>  ( 1 4 **2 5** 8 ), </br> 
  Swap since 5 > 2 </br>
  ( 1 4 2 **5 8** ) –> ( 1 4 2 **5 8** ),</br> 
  Now, since these elements are already in order (8 > 5), algorithm does not swap them.</br>
  **Second Pass:** </br>
  ( **1 4** 2 5 8 ) –> ( **1 4** 2 5 8 ) </br>
  ( 1 **4 2** 5 8 ) –> ( 1 **2 4** 5 8 ), </br>
  Swap since 4 > 2 </br>
  ( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 )</br> 
  ( 1 2 4 **5 8** ) –>  ( 1 2 4 **5 8** ) </br>
  Now, the array is already sorted, but our algorithm does not know if it is completed.</br> 
  The algorithm needs one whole pass without any swap to know it is sorted.</br>
  **Third Pass:** </br>
  ( **1 2** 4 5 8 ) –> ( **1 2** 4 5 8 )</br> 
  ( 1 **2 4** 5 8 ) –> ( 1 **2 4** 5 8 ) </br>
  ( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 ) </br>
  ( 1 2 4 **5 8** ) –> ( 1 2 4 **5 8** )</br>
  
  ![image](https://user-images.githubusercontent.com/96446768/179427354-31d5f7d2-2ecf-48c7-87ad-9aa34a7ce56a.png)

## 3. Recursive Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.</br>
**Example:**</br> 
**First Pass:**</br> 
( **5 1** 4 2 8 ) –> ( **1 5** 4 2 8 ),</br> 
Here, algorithm compares the first two elements, and swaps since 5 > 1. </br>
( 1 **5 4** 2 8 ) –> ( 1 **4 5** 2 8 ),</br> 
Swap since 5 > 4 </br>
( 1 4 **5 2** 8 ) –> ( 1 4 **2 5** 8 ), </br>
Swap since 5 > 2 </br>
( 1 4 2 **5 8** ) –> ( 1 4 2 **5 8** ),</br> 
Now, since these elements are already in order (8 > 5), algorithm does not swap them.</br>
**Second Pass:**</br> 
( **1 4** 2 5 8 ) –> ( **1 4** 2 5 8 )</br> 
( 1 **4 2** 5 8 ) –> ( 1 **2 4** 5 8 ), </br>
Swap since 4 > 2 </br>
( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 ) </br> 
( 1 2 4 **5 8** ) –> ( 1 2 4 **5 8** ) </br>
Now, the array is already sorted, but our algorithm does not know if it is completed.</br> 
The algorithm needs one **whole** pass without **any** swap to know it is sorted.</br>
**Third Pass:** </br>
( **1 2** 4 5 8 ) –> ( **1 2** 4 5 8 )</br> 
( 1 **2 4** 5 8 ) –> ( 1 **2 4** 5 8 ) </br>
( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 ) </br>
( 1 2 4 **5 8** ) –> ( 1 2 4 **5 8** )</br>

## 4. Insertion Sort  
![image](https://user-images.githubusercontent.com/96446768/179427097-81599a65-2b85-46eb-988d-acd69be1294f.png)

## 5. Recursive Insertion Sort
![image](https://user-images.githubusercontent.com/96446768/179427572-0abe3aca-2eb4-4057-a2b3-56bd6a3fac6b.png)


