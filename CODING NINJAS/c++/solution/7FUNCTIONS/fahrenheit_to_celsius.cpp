#include<iostream>
using namespace std;

/*solution*/


void printTable(int start, int end, int step){
    for(int i=start; i<=end; i+=step){
        cout << i << " " << (i-32)*5/9 << endl;
    }
}


/*main code*/


int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}