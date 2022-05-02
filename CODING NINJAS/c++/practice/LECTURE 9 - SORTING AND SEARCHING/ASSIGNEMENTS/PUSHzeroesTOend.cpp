#include<iostream>
using namespace std;
void pushZeroesEnd(int *a, int n)
{
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[count++]=a[i];
        }
    }  
    while(count<n){
        a[count++]=0;
    }
}
int main()
{
	int t;
	cin >> t;	
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		pushZeroesEnd(input, size);
		for (int i = 0; i < size; i++){
			cout << input[i] << " ";
		}
		cout << endl;
		delete[] input;
	}
	return 0;
}