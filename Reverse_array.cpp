#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=(n-1);
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}


void printArray(int arr[],int n){
    for(int  i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}




int main(){

    int a[7]={1,2,3,6,8,9,6};
    int b[5]={4,7,8,4,4};
    reverse(a,7);
     reverse(b,5);


    printArray(a,7);
    printArray(b,5);

    return 0;

}