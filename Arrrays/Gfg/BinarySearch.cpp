#include<bits/stdc++.h>
using namespace std;



int binarySearch(int arr[], int l, int r, int mid,int key){
    while(l<=r){
        mid=(l+r)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]>=key)
        r--;
    else
        l++;
    }

    return mid;
}

int main(){

    int key;
    cout<< " Enter the number : ";
    cin>>key;

    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int len=sizeof(arr)/sizeof(int);
   
    int l=0;
    int r=len-1;
    int mid=(l+r)/2;

    cout<< binarySearch(arr,l,r,mid,key);
}

