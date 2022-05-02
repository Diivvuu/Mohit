#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    for(int i=start;i<=end;i+=step){
        cout << i << "\t" << (i-32)*5/9 << endl;
    }
}
int main(){
    int s,e,w;
    cin >> s >> e >> w;
    printTable(s,e,w);
}
