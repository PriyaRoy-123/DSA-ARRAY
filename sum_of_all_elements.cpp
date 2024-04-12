#include<iostream>
using namespace std;

int sumArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
 int main(){
    int arr[10]={2,5,7,8,3,2,7,8,4,3};
    cout<<"sum of all elements of an array is: "<< sumArray(arr,10)<< endl;
    return 0;

 }