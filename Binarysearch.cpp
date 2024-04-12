#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        if(key>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return -1;
}
 int main(){
    int even[4]={3,5,7,9};
    int odd[5]={1,4,6,7,9};

    int evenindex=binary_search( even,4,9);
    cout<<"The index of 9 is"<< evenindex<< endl;
    int oddindex=binary_search( odd,5,6);
    cout<<"The index of 6 is "<< oddindex<< endl;
    return 0;

 }
 