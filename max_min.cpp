# include<iostream>
using namespace std;



int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int  getmin(int arr[],int n){
    int min =INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<INT_MAX){
            min=arr[i];

        }
    }
    return min;
}

 int main(){
    int arr[100],n;
    cout<<"enter the number of elements in the array"<<endl;

    cin>>n;
    cout<<"enter the elements u want to insert in the array :"<< endl;
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"maximum element in the array is: "<< getmax(arr,n)<< endl;
       cout<<"minimum element in the array is: "<< getmin(arr,n)<< endl;
    return 0;

 }