#include <iostream>
using namespace std;


//solution
void swapAlternate(int *a, int size){
    int x = a[size-1];
    for(int i = 0;i < size;i+=2){
        int temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    if(size%2 != 0){
        a[size-1] = x;
    }
}


//main code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}