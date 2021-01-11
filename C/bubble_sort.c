#include <stdio.h>


void swap(int *a, int *b) {
	int t = *a; 
	*a = *b; 
	*b = t; 
}

void bubble_sort(int *arr, int len) { 
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 -i; j++) { 
			if (arr[j] > arr[j+1]) { 
				swap(&arr[j], &arr[j+1]); 			
			}
		}
	}
} 


int main() {
  int arr[] = {1,55,66,22, 89, 1, 0}; 
  int len = sizeof(arr)/sizeof(arr[0]); 
  bubble_sort(arr, len); 
  
  for (int i = 0; i < len; i++) { 
	  printf("%d\n", arr[i]); 
  }
  return 0; 
}
