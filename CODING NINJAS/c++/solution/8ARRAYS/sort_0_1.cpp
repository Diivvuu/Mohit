#include<iostream>
#include<algorithm>
using namespace std;
//solution code
void sortZerosAndOne(int *a, int size){
    int i = 0, j = size-1;
    while(i<j)
    {
        if(a[i] == 0){
            i++;
        }
        else if(a[j] == 1){
            j--;
        }
        else{
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}


//main code
int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int size;

        cin >> size;
        int *input = new int[size];

        for(int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        sortZerosAndOne(input, size);

        for(int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}