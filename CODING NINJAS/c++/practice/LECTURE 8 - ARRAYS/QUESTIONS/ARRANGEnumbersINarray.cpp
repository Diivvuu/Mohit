#include<iostream>
using namespace std;
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
void arrange(int *a,int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            a[count++]=i;
        }
    }
    for(int i=n;i>=2;i++){
        if(i%2==0){
            a[count++]=i;
        }
    }
}