//Reference https://www.geeksforgeeks.org/quick-sort/

#include <stdio.h> 

void swap(int *a, int *b) {
	//swapping using pointers
	//t = temporal variable to store int a 
	int t = *a; 
	*a = *b; 
	*b = t;  
} 

int partition(int *arr, int low, int high) { 
	int pivot_elem = arr[high]; 
	int min_elem = (low - 1); 

	for (int i = low; i <= high - 1; i++) { 
		if (arr[i] < pivot_elem) { 
			min_elem++; 
			swap(&arr[min_elem], &arr[i]); 
		}
	}
	swap(&arr[min_elem + 1], &arr[high]); 
	return (min_elem + 1); 
}

void quick_sort(int *arr, int low, int high) { 
	if (low < high) { 
		int ind = partition(arr, low, high); 

		//sorting before partitions 
		quick_sort(arr, low, ind-1); 
		quick_sort(arr, ind + 1, high); 
	} 

}

int main() { 
	int arr [] = {22, 88, 2, 0, 12, 20}; 
	int len = sizeof(arr)/sizeof(arr[0]); 

	//low value 
	int low = 0; 
	//high value
	int high = len - 1; 

	quick_sort(arr, low, high); 

	for(int i = 0; i < len; i++) { 
		printf("%d\n", arr[i]); 
	}

	return 0;
}

