#include<iostream>
using namespace std;
int main(){
    int n,prevNum,currNum;
    cin >> n;
    bool isDec=true;
    cin >> prevNum;
    while (--n != 0){
        cin >> currNum;
        if(prevNum < currNum){
            isDec=false;
        }
        else if(prevNum > currNum){
            if(isDec == false){
                cout << "false" << endl;
                return 0;
            }
        }
        else if(prevNum == currNum){
            cout << "false" << endl;
            return 0;
        }
        prevNum = currNum;
    }
    cout << "true";
    
}