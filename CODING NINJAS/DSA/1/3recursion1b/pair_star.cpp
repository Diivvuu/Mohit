#include<iostream>
using namespace std;
int length(char input[]){
    // int len=0;
    // for(int i=0;input[i]!='\0';i++){
    //     len++;
    // }
    // return len;
    if(input[0] == '\0'){
        return 0;
    }
    return 1+length(input+1);
}
void pairStar(char input[], int start){
    if(input[start] == '\0' || input[start+1] == '\0'){
        return;
    }
    pairStar(input, start+1);
    if(input[start] == input[start+1]){
        int end = length(input);
        input[end+1] = '\0';
        int i=end;
        for(;i>=start+1;i--){
            input[i]=input[i-1];
        }
        
        input[i+1]='*';
    }
}
void pairStar(char input[]) {
    pairStar(input, 0);

}
int main(){
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout << input << endl;
}