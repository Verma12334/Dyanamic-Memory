#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //creating 2D array
    int**arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

//Input 2D Array
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cin>>arr[i][j];
    }
}

//printing 2D Array
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
    }
}
}