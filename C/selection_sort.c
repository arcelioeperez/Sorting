#include <stdio.h> 

void swap(int *a, int *b) {
	//using pointers to swap values
	//t = temporal variable 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

void selection_sort(int *arr, int len) { 
	//min value 
	for (int i = 0; i < len - 1; i++) { 
		int min_val = i; 
		for (int j=i+1; j < len; j++) { 
			if (arr[j] < arr[min_val]) {
				min_val = j; 
				swap(&arr[min_val], &arr[i]); 
			}
		}
	}
} 

int main() { 
  int arr [] = {2, 33, 88, 32, 1, 0}; 
  int len = sizeof(arr)/sizeof(arr[0]); 

  selection_sort(arr, len); 

  for (int i = 0; i < len; i++) { 
	  printf("%d\n", arr[i]); 
  }
  return 0; 
}
