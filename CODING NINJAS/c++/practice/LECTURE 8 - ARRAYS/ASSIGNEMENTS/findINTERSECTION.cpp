#include<iostream>
using namespace std;
int intersection(int a1[],int a2[], int size1, int size2){
	for(int i=0;i<size1;i++){
		for(int j=0;j<size2;j++){
			if(a1[i]==a2[j]){
				cout << a1[i] << " ";
				a2[j]=-1;
				break;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size1, size2;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; i++){
			cin >> input1[i];
		}
		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; i++){
			cin >> input2[i];
		}
		cout << intersection(input1, input2, size1, size2);
		delete[] input1;
		delete[] input2;	
		cout << endl;
	}
	return 0;
}
