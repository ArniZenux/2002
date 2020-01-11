#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

void insertionSort(int arr[]){
	int temp, j;
	for(int i=1; i<10; i++){
		temp = arr[i];
        j = i - 1;
		while((temp < arr[j]) && (j >=0) ){
			  arr[j+1] = arr[j];
			  j = j - 1;
		}
		arr[j+1] = temp;
	}
}


void print(int arr[]){
	for(int i=0;i<10;i++){
		std::cout<< "[" << arr[i] << "]";
	}
}

int main(){
	srand (time(NULL));

	int array[10];

	for(int i=0; i < 10; i++){
		array[i] = (rand() % 100) + 1;
	}

	print(array);
	insertionSort(array);
	cout <<"\n";
	print(array); 

	return 0; 
}