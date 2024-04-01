#include<iostream>
using namespace std;
#define f 56
int main(){
    cout<<f;
    int n,m;
    cin>>n>>m;//n=row ,m=column
    //creating 2D array
    int**arr=new int*[n];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }

//Input 2D Array
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cin>>arr[i][j];
    }
}

//printing 2D Array
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cout<<arr[i][j]<<" ";
    }
}
//deletaion of memoery

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      delete[]arr[i];
    }
}
delete[]arr;

}