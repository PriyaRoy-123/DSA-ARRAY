#include<iostream>
using namespace std;
bool lsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
 int main(){


    int arr[8]={1,3,5,7,9,0,4};
    int key;
    cout<<"enter the element u want to search"<< endl;
    cin>>key;
    
    bool found=lsearch(arr,8,key);
    if(found){
        cout <<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<< endl;
    }
    return 0;
 }