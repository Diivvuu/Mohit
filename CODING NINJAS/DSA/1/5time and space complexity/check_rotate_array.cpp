#include <iostream>
using namespace std;
//solution code
int arrayRotateCheck(int *input, int size){
for(int i = 0;i < size - 1;){
    if(input[i] < input[i + 1]){
        i++;
    }
    else{
        return ++i;
    }
}
return 0;
}

//amin code
int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}