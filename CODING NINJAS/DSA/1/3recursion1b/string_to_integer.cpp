#include<iostream>
using namespace std;
int stringToInteger(char input[]){
    int intValue;
    intValue = atoi(input);
    return intValue;
}
int main(){
    char input[50];
    cin >> input;
    cout << stringToInteger(input) << endl;
}