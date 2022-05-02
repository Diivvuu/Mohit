#include<iostream>
using namespace std;
int main(){
    char c;
    int count_of_alphabets=0,count_of_numbers=0,count_of_spaces=0;
    c=cin.get();
    while (c!='$')
    {
        if (c>='a' && c<='z')
        {
            count_of_alphabets++;
        }
        else if (c>='0' && c <='9')
        {
            count_of_numbers++;
        }
        else
        {
            count_of_spaces++;
        }
        c=cin.get();
    }
    cout << count_of_alphabets << " " << count_of_numbers << " " << count_of_spaces;
}