#include <iostream>

using namespace std;

void selection_sort(int array[], int n){
  
	int min_index;
	for (int i=0; i<n-1; i++){
		int min_index = i;
		for (int j=i+1; j<n; j++){
			if(array[j] < array[min_index]){
				min_index = j;
			}
		}
		if(min_index != i){
			int temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}

	}

}

void print_array(int array[], int n){
	for (int i=0; i<n; i++){
		cout << array[i] << " ";
	}
	cout << "\n";

}


int main(){
	int array[] = {10, 13, 8, 3, 17, 25};
	int length = sizeof(array) / sizeof(int);
	selection_sort(array, length);
	print_array(array, length);
	return 0;
}
