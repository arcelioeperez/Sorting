/* Reference: https://www.geeksforgeeks.org/merge-sort/
 */
#include <stdio.h>

void merge(int *arr, int l, int m, int r) { 
	//l left index = 0; 
	//r right index = sizeof(arr)/sizeof(arr[0]) - 1;  
	//m middle index = l + (r -l) / 2; to avoid overflow (equivalent to l+r/2)
	
	//sizes of two subarrays
	int left = m - l + 1; 
	int right = r - m; 

	//arrays with the sizes
	int arr_left[left], arr_right[right]; 

	for(int i = 0; i < left; i++) { 
		arr_left[i] = arr[l+i]; 
	}
	for (int i = 0; i < right; i++) { 
		arr_right[i] = arr[m + 1 + i]; 
	}
	
	int i = 0; 
	int j = 0; 
	int k = l; 

	while(i < left && j < right) { 
		if (arr_left[i] <= arr_right[j]) { 
			arr[k] = arr_left[i]; 
			i++;
		}
		else { 
		arr[k] = arr_right[j]; 
		j++; 
	}
		k++; 
}

	while (i < left) { 
		arr[k] = arr_left[i]; 
		i++; 
		k++; 
	}

	while (j < right) { 
		arr[k] = arr_right[j];
		j++; 
		k++; 
	}
 } 



void merge_sort(int *arr, int l, int r) { 
  if (l < r) { 
	  int m = l + (r - l) / 2; 
	  merge_sort(arr, l, m); 
	  merge_sort(arr, m + 1, r); 
	  merge(arr, l, m, r); 
	}
}

int main() { 
	int arr [] = {33, 77, 8, 9, 0, 3 , 20};
	int len = sizeof(arr)/sizeof(arr[0]); 

	merge_sort(arr,0, len - 1); 

	for (int i = 0; i < len; i++){ 
		printf("%d\n", arr[i]); 
	}

	return 0; 
}
