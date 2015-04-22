#include <stdio.h>

int main(){
	int i;
	int a[10] = { 2, 5, 3, 1, 6, 7, 6, 9, 10, 8 };
	void QuickSort(int *, int, int);

	QuickSort(a, 0, 9);
	//QuickSort(a);

	for (i = 0; i < 10; i++){
		printf("%d\n", a[i]);
	}

	return 0;
}

int partition(int arr[], int low, int high){
	int key;
	key = arr[low];
	while (low < high){
		while (low < high && arr[high] >= key)
			high--;
		if (low < high)
			arr[low++] = arr[high];
		while (low < high && arr[low] <= key)
			low++;
		if (low < high)
			arr[high--] = arr[low];
	}
	arr[low] = key;
	return low;
}
void QuickSort(int arr[], int start, int end){
	int pos;
	if (start < end){
		pos = partition(arr, start, end);
		QuickSort(arr, start, pos - 1);
		QuickSort(arr, pos + 1, end);
	}
	//return ;
}