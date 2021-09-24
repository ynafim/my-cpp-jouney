#include <iostream>
using namespace std;

int  arrangeOrder(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                    arr[j]=arr[i];
                        arr[i]=temp;

             }
        }
    }
    for(int i=0;i<n;i++){
        return arr[i];
    }
    return 0;
}
    

int binarySearch(int n, int arr[], int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    arrangeOrder(arr,n);
    cout<<binarySearch(n,arr,key);
    return 0;
}