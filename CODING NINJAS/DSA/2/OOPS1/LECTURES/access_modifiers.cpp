#include<iostream>
using namespace std;
class A{
    int x,y;
    int sqrt(){
        return x*x;
    }
    public:
        int z;
        int twice(int n){
            return 2*n;
        }
        int test(int i) {
            int q = sqrt();
            return q + i;
    }
};

int main(){
    A obj;
    obj.z = 10;
    //obj.x = 4; can't be accessed publically coz defined privately.

    int j = obj.twice(10);
    cout << j << endl;
    //int k = obj.sqrt();
    int l = obj.test(10);
    cout << l;
}