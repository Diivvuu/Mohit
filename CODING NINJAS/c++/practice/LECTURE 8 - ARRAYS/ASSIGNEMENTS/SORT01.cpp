#include <iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *a, int n)
{
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==0){
            i++;
        }
        else{
            if(a[j]==1){
                j--;
            }
            else{
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}