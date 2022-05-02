#include <iostream>
using namespace std;
int tripletSum(int *a, int n, int x)
{
    int tripletCount=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                int total=a[i]+a[j]+a[k];
                if(i<j && j<k){
                    if(x==total){
                        tripletCount++;
                    }
                }
                else{
                    continue;
                }
            }
        }
    }
    return tripletCount;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}