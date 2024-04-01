#include<iostream>
using namespace std;

void print(int arr[],int n,int start=0){ //Here start is a default varaible....And it is start from right side 1stiy start..then n....if 1stly make n as a degault variable ..it is wrong
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={78,89,79,90,99};
    int size=5;
    print(arr,size);
    cout<<endl;
    print(arr,size,2);
}