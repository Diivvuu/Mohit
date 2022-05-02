#include <iostream>
using namespace std;


//solution
void arrange(int *a, int size){
	int count=0;
	for(int i = 1;i <= size;i++){
		if(i%2 != 0){
			a[count++] = i;
		} 
	}
	for(int i = size;i >= 2;i--){
		if(i%2 == 0){
			a[count++] = i;
		}
	}
}


//main code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}