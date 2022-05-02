#include <iostream>
#include <string>
using namespace std;


//solution
#include<string>
using namespace std;
string key[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int keypad(int num, string output[]){
    int x = num%10;
    if(x == 0 || x == 1){
        output[0] = "";
        return 1;
    }
    int SizeOfSmall = keypad(num/10, output);
    for(int i = 1; i < key[x].size() ; i++){
        for(int j = 0; j < SizeOfSmall ; j++){
            output[SizeOfSmall*i+j] = output[j];
        }
    }
    for(int i = 0; i < key[x].size() ; i++){
        for(int j = 0; j < SizeOfSmall ; j++){
            output[SizeOfSmall*i+j] += key[x][i];
        }
    }
    return SizeOfSmall*key[x].size();
}


//main code
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
