#include<iostream>
#include<algorithm>
using namespace std;
//solution code
int maximumProfit(int budget[], int n){
    sort(budget, budget + n);
    int temp[n];
    for(int i = 0;i < n;i++){
        temp[i] =  budget[i]*(n - i);
    }
    sort(temp, temp + n);
    return temp[n - 1];
}



//main code
int main(){
    int n, *input, i, *cost;
    cin >> n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin >> input[i];
    
    cout << maximumProfit(input, n) << endl;
}