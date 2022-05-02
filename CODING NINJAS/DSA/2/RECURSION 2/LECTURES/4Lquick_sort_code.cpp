#include<iostream>
using namespace std;
//solution code
int partition(int input[], int start, int end){
    int x = input[start];
    int count = 0;
    for(int  i = start+1;i <= end; i++ ){
        if(input[i] <= x){
            count++;
        }
    }
    int xindex = start + count;
    int temp = input[xindex];
    input[xindex] = input[start];
    input[start] = temp;
    int i = start, j = end;
    while( i <= xindex && j >= xindex){
        while(input[i] <= x){
            i++;
        }
        while(input[j] > x){
            j--;
        }
        if(i < xindex && j > xindex){
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }
    return xindex;
}
void quickSort1(int input[], int start, int end){
    if(start < end){
        int p = partition(input, start, end);
        quickSort1(input, start, p-1);
        quickSort1(input, p+1, end);
    }
    else{
        return;
    }
}
void quickSort(int input[], int size){
    quickSort1(input, 0, size-1);
}
//main code
int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0;i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0;i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;
}