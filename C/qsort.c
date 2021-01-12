#include <stdio.h> 
#include <stdlib.h> 

int compare_nums(const void *a, const void *b) { 
  return (*(int*)a - *(int*)b); 
} 

int main() {
  int arr [] = {2,33,0,2,44,99,0,5,2,1}; 
  int len = sizeof(arr)/sizeof(arr[0]); 

  qsort(arr, len, sizeof(int), compare_nums); 
  
  for(int i =0; i < len; i++) { 
	  printf("%d\n", arr[i]); 
  }

  return 0; 
}

