#include<iostream>
using namespace std;
int binarySearch(int *a, int n, int val)
{
    int start=1,end=n-1;
    int mid;
    while(start < end){
        mid = (start + end)/2;
        if(val==a[mid]){
            return mid;
        }
        else if(val<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
#include <iostream>
using namespace std;
int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}