# Sorting-
A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements.

## 1. Sorting 
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The         algorithm maintains two subarrays in a given array.
  1) The subarray which is already sorted. 
  2) Remaining subarray which is unsorted.
  In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 
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
## 3. Recursive Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
Example: 
First Pass: 
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), 
Here, algorithm compares the first two elements, and swaps since 5 > 1. 
( 1 5 4 2 8 ) –> ( 1 4 5 2 8 ), 
Swap since 5 > 4 
( 1 4 5 2 8 ) –> ( 1 4 2 5 8 ), 
Swap since 5 > 2 
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), 
Now, since these elements are already in order (8 > 5), algorithm does not swap them.
Second Pass: 
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
Now, the array is already sorted, but our algorithm does not know if it is completed. 
The algorithm needs one whole pass without any swap to know it is sorted.
Third Pass: 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
