#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int firstOccurence(int arr[],int size,int target){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end){
        int element=arr[mid];
        if(element==target){
            ans=mid;
            end=mid-1;
        }
        else if(element>target){
            end=mid-1;
        }
        else if(element<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    
return ans;

}
int lastOccurence(int arr[],int size,int target){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

        while (start<=end){
        int element=arr[mid];
        if(element==target){
            ans=mid;
            start=mid+1;
        }
        else if(element>target){
            end=mid-1;
        }
        else if(element<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
return ans;


    
}

int main(){ 

    cout<<"Enter the size of the array ";
    int size;
    cin>>size;
    cout<<"Enter the elements in the array";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target ";
    int target;
    cin>>target;
    cout<<"Your First Occurence of the target is at index "<<firstOccurence(arr,size,target)<<endl;
    cout<<"Your Last Occurence of the target is at index "<<lastOccurence(arr,size,target);

}













