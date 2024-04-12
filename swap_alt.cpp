#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if((i+1)<n){
           swap( arr[i],arr[i+1]);
        }
    }
    
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
        
    }cout<< endl;
    

}

int main(){

    
    int even[10]={2,5,8,9,5,4,3,1,8,4};
    int odd[7]={9,5,4,3,1,8,4};
    
    swapAlternate(even,10);
    printArray(even,10);
     

     cout<< endl;
     swapAlternate(odd,7);
     printArray(odd,7);

    return 0;

}