#include<iostream>
using namespace std;
//solution code
void help(int input[], int startIndex, int s, int output[], int m){
    if(startIndex == s){
        for(int i = 0;i < m;i++){
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }
    int helpo[1000];
    help(input, startIndex + 1, s, output, m);
    int i;
    for( i = 0;i < m;i++){
        helpo[i] = output[i];
    }
    helpo[i] = input[startIndex];
    help(input, startIndex + 1, s, helpo, m + 1);
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[1001];
    int m=0;
    help(input,0,size,output,m);
}


//main code
int main(){
    int input[1000], length;
    cin >> length;
    for(int i = 0;i < length; i++){
        cin >> input[i];
    }
    printSubsetsOfArray(input, length);
}