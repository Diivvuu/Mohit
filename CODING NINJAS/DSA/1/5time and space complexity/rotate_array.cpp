#include <iostream>
#include<algorithm>
using namespace std;
//solution code
void rotate(int *input, int d, int n){
    reverse(input, input + n);
    reverse(input, input + n - d);
    reverse(input + n - d, input + n);
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}