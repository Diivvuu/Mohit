#include <iostream>
using namespace std;
void merge(int *a, int x,int *b, int y, int *c)
{
	int z=x+y;
	int i=0,j=0;
	if(x==0||y==0){
		if(x==0){
			c=a;
		}
		else{
			c=b;
		}
	}
	else{
		int k=0;
	    while(i<x && j<y) 
		{
			for(int k=0;k<z;k++){
				if(a[i]<b[j]){
					c[k]=a[i];
					i++;
				}
				else if(a[i]>b[j]){
					c[k]=b[j];
					j++;
				}
				else if(a[i]==b[k]){
					c[k]=a[i];
					c[k+1]=b[j];
				    i++,j++,k+=2;
				}
			}
		}
		while(i<x){
            c[k]=a[i];
					i++;
                    k++;
        }
        while(j<y){
            c[k]=b[j];
					j++;
                    k++;
        }
	}	
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size1;
		cin >> size1;
		int *arr1 = new int[size1];
	    for (int i = 0; i < size1; i++){
			cin >> arr1[i];
		}
		int size2;
		cin >> size2;
		int *arr2 = new int[size2];
		for (int i = 0; i < size2; i++){
			cin >> arr2[i];
		}
		int *ans = new int[size1 + size2];
		merge(arr1, size1, arr2, size2, ans);
		for (int i = 0; i < size1 + size2; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}