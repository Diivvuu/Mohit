#include<iostream>
using namespace std;
int main(){
    int s,e,w;
    cin >> s >> e >> w;
    for(int i=s;i<=e;i+=w){
        int celsius=(i-32)*5/9;
        cout << i << " " << celsius << endl;
    }
}