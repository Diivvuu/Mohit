#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int basic,allow;
    char grade;
    float hra,da,pf,total_salary;
    cin >> basic >> grade;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
     if (grade == 'A'){
        allow=1700;
    }
    else if (grade == 'B'){
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    total_salary=basic+hra+da+allow-pf;
    int ans=round(total_salary);
    cout << ans;
}
