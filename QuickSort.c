#include <stdio.h>

int main(){
	int i;
	int a[10] = { 2, 5, 3, 1, 6, 7, 6, 9, 10, 8 };
	void QuickSort(int *, int, int);

	QuickSort(a, 0, 9);

	for (i = 0; i < 10; i++){
		printf("%d\n", a[i]);
	}

	return 0;
}
int quicksort1(int a[], int low, int high){
	int temp;
	temp = a[low];
	while (low < high)
	{
		while (low < high && a[high] >= temp) --high;
		a[low] = a[high];
		while (low < high && a[low] <= temp) ++low;
		a[high] = a[low];
	}
	a[low] = temp;
	return low;
}
void QuickSort(int a[], int low, int high){
	int temp;
	while (low < high){
		temp = quicksort1(a, low, high);
		QuickSort(a, low, temp - 1);
		low = temp + 1;
//		QuickSort(a, temp + 1, high);
	}
}