\#include <iostream>

using namespace std;

void BubbleSort(int arr[10]){
	for(int i=0; i<10 - 1; i++){
		for(int j=0; j<10 - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				std::swap(arr[j],arr[j+1]);
			}
		}

	}
}
void PrintArray(int arr[10]){
	for(int i=0; i<10; i++){
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}
int main(){
	int arr[10] = {64,34,25,12,22,11,90,45,67,18};
	PrintArray(arr);
	BubbleSort(arr);
	std::cout <<  "Posortowane" << std::endl;
	PrintArray(arr);

}

