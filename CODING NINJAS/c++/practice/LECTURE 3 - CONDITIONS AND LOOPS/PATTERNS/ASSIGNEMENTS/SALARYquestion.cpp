#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int bs,allow;
    char grade;
    float salary,hra,da,pf;
    cin >> bs >> grade;
    hra = 0.2*bs;
    da = 0.5*bs;
    if (grade == 'A')
    {
        allow=1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else 
    {
        allow = 1300;
    }
    pf=0.11*bs;
    salary=bs+hra+da+allow-pf;
    cout << round(salary);
}