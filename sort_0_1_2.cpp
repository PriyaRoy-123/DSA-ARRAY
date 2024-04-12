#include<iostream>
using namespace std;




void sort(int arr[],int n){
    
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right ){
        left++;
    }
    while(arr[right]==1 && left< right){
        right--;
    }

    if( left< right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    
    }




}
void  printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
int main(){
    int arr[6]={1,1,0,0,1,0};
   
    sort(arr,6);
    printArray(arr,6);
    return 0;
}