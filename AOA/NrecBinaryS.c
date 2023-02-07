// ALROY PEREIRA
// 9631 SE COMPS A
#include <stdio.h>
int iterativeBinarySearch(int array[], int s, int e, int element){
   while (s <= e){
      int mid = s + (e- s )/2;
      if (array[mid] == element)
         return mid;
      if (array[mid] < element)
         s = mid + 1;
      else
         e = mid - 1;
   }
   return -1;
}
int main(void){
   int array[100],n,element;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("Enter the elements\n");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&array[i]);
   }
   printf("Enter the elements to be searched\n");
   scanf("%d",&element);
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) 
   {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
/*******************************************
OUTPUT:-
Enter the number of elements
7
Enter the elements
2 3 4 5 6 7 8
Enter the elements to be searched
6
Element found at index : 4
********************************************/