#include<iostream>
using namespace std;
int main(){
    char c;
    int count_of_characters=0,count_of_digits=0,count_of_spaces=0;
    c=cin.get();
    while(c!='$'){
        if((c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z')){
            count_of_characters++;
        }
        else if(c >= '0' && c <= '9'){
            count_of_digits++;
        }
        else if(c = ' '){
            count_of_spaces++;
        }
        c=cin.get();
    }
    cout << count_of_characters << " " << count_of_digits << " " << count_of_spaces;
}