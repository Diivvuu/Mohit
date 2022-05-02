#include<iostream>
using namespace std;
//solution code
int stringToNumber(char input[]){
    int newValue;
    newValue = atoi(input);
    return newValue;
}
//main code
int main(){
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}