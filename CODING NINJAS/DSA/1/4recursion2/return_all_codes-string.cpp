#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
//solution code
void help(string input, string out, vector<string> &str){
    if(input.size() == 0){
        str.push_back(out);
        return;
    }
    char c1 = (input[0] - 48) + 96;

    if(input[0] == '0')
        return;

    help(input.substr(1),out + c1, str);
    
    if(input.size() > 1)
    {
        int d = (input[0] - 48)*10 + (input[1] - 48);
        if(d > 26)
                return;
        char c2 = 96 + d;
        help(input.substr(2), out + c2, str);
    }
}
int getCodes(string input, string output[10000]){
    vector<string> str;
    string out = "";
    help(input, out, str);

    for(int i = 0;i < str.size(); i++)
        output[i] = str[i];

    int x = str.size();

    return x;
}


//main code
int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0;i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}