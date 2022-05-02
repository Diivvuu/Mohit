#include<iostream>
using namespace std;
int main(){
    int n,prevNum,currNum;
    cin >> n;
    cin >> prevNum;
    bool isDec=true;
    while (--n!=0)
    {
        cin >> currNum;
        if (prevNum<currNum)
        {
            isDec=false;
        }
        else if (prevNum>currNum)
        {
            if(isDec==false){
                cout << "false";
                return 0;
            }
        }
        else if (prevNum==currNum)
        {
            cout << "false";
            return 0;
        }
        prevNum=currNum;
    }
    cout << "true";
    return 0;
}
