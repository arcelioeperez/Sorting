#include <stdio.h> 
#include <math.h> 

//insertion function 

void insertion_function(int *arr, int len) {  
	  for (int i = 1; i < len; ++i) { 
		  int key = arr[i]; 
		  int j = i - 1;

		  while (j >= 0 && arr[j] > key) { 
			  arr[j + 1] = arr[j]; 
			  j--; 
		  }
		arr[j + 1] = key; 

	  }
} 


int main() {
  int arr [] = {88, 33, 2, 3, 0, 12, 1}; 
  int len = sizeof(arr)/sizeof(arr[0]); 
  insertion_function(arr, len); 
  
  for (int i = 0; i < len; ++i) { 
	  printf("%d\n", arr[i]); 
  }
  return 0; 
}
