#include<iostream>
using namespace std;


//solution
void merging(int input[], int start, int mid, int end){
    int a[end - start + 1];
    int l1 = start, l2 = mid + 1, i = 0;
    while(l1 <= mid && l2 <= end){
        if(input[l1] <= input[l2]){
            a[i++] = input[l1++];
        }
        else{
            a[i++] = input[l2++];
        }
    }
    while(l1 <= mid){
        a[i++] = input[l1++];
    }
    while(l2 <= end){
        a[i++] = input[l2++];
    }
    int j=0;
    for(int i = start;i <= end; i++){
        input[i]  = a[j++];
    }
}
void mergeSort1(int input[], int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        mergeSort1(input, start, mid);
        mergeSort1(input, mid+1, end);
        merging(input, start, mid, end);
    }
    else{
        return;
    }
}
void mergeSort(int input[], int size){
    if(size <= 0){
        return;
    }
    mergeSort1(input, 0, size-1);
}


//main code
int main(){
    int length;
    cin >> length;
    int *input = new int[length];
    for(int i = 0;i < length; i++) { 
        cin >> input[i];
    }
    mergeSort(input, length);
    for(int i = 0;i < length; i++) {
        cout << input[i] <<  " ";
    }
}