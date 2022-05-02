#include<iostream>
#include<string>
#include<stack>
using namespace std;


bool checkRedundantBrackets(string input){
	stack<char> s;
	int n = input.size();
	for(int i=0;i<n;i++){
		if(input[i] == ')'){
			int count = 0;
			while(s.top() != '('){
				count++;
				s.pop();
			}
			s.pop();
			if(count == 0 || count == 1){
				return true;
			}
		}else{
			s.push(input[i]);
		}
	}
	return false;
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}