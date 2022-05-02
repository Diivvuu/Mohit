void swapAlternate(int *arr, int size){
    for(int i=1;i<=size;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int j=1;j<=size;j++){
        cout << arr[j] << " ";
    }
}