#include "SortingAndSelection.h"
//Sort using bubble, insertion, selection, merge, quick(pivot as a number from 1-100)
//Sort ascending and descending
//Hw 11

void printArr(int arr[], int size){
	for(int i = 0; i < size; i++){
		if(i != size-1){
			cout << arr[i] << ", ";
		}else{
			cout << arr[i] << endl;
		}
	}
}
void printArr(float arr[], int size){
	for(int i = 0; i < size; i++){
		if(i != size-1){
			cout << arr[i] << ", ";
		}else{
			cout << arr[i] << endl;
		}
	}
}

void bubbleSort(int arr[100]){
	int temp = 0;
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < 100 - 1; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}else{}
		}
	}
}

void selectionSort(int arr[100]){
	int index = 0;
	int temp = 0;
	for(int i = 0; i < 100; i++){
		int min = 1000000000;
		for(int j = i; j< 100; j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}else{}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

//void merge(int arr[], int l/*Left index*/, int m/*Middle index*/, int r/*Right index*/){
/*	// Size of first array
	int n1 = m - l + 1;
	// Size of second array
	int n2 = r - m;
}

void mergeSort(int arr[], int l, int r){
	if(l < r){
		int m = l + (r-1)/2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}*/

void insertionSort(int arr[]){
	int temp;
	for(int i = 1; i < 100; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				for(int k = i; k > j; k--){
					arr[k] = arr[k - 1];
				}
				arr[j] = temp;
				break;
			}
		}
	}
}

int main() {
	srand(time(0));
	int arr[100];
	int arr1[100];
	//int arr2[100];
	//int arr3[100];
	int arr4[100];
	//float farr[100];

	for(int i = 0; i < 100; i++){
		arr[i] = rand() % 1000;
		arr1[i] = rand() % 1000;
		//arr2[i] = rand() % 1000;
		//arr3[i] = rand() % 1000;
		arr4[i] = rand() % 1000;
		//farr[i] = rand()/ 250.22;

		arr1[i] = arr[i];
		arr4[i] = arr[i];
	}

	bubbleSort(arr);
	printArr(arr, 100);
	selectionSort(arr1);
	printArr(arr1, 100);
	//mergeSort(arr2);
	//printArr(arr2, 100);
	//quickSort(arr3);
	//printArr(arr3, 100);
	insertionSort(arr4);
	printArr(arr4, 100);
}
