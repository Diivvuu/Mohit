#include <iostream>
using namespace std;
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int j=i-1;
        while (curr<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;
    }
}
// void insertionSort(int array[], int size) {
//   for (int step = 1; step < size; step++) {
//     int key = array[step];
//     int j = step - 1;

//     // Compare key with each element on the left of it until an element smaller than
//     // it is found.
//     // For descending order, change key<array[j] to key>array[j].
//     while (key < array[j] && j >= 0) {
//       array[j + 1] = array[j];
//       --j;
//     }
//     array[j + 1] = key;
//   }
// }

int main(){
	int t;
	cin >> t;
		while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		insertionSort(input, size);
		for (int i = 0; i < size; i++){
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}