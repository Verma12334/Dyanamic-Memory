#include<iostream>
using namespace std;
int getsum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    //varible size array
    int*arr=new int[n];
    
    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"Sum of array elments ="<<ans;
    return 0;
}
