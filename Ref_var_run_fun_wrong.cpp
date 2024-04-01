#include<iostream>
using namespace std;
int& update(int n){  //it is not possible
    int num=10;
    int&ans=num;
    return ans;
}
int*pointer(int n){  //it is not possible
    int*ptr=&n;
    return ptr;
}
int main(){
    int i=5;
    cout<<i<<endl;
    update(i);
    pointer(i);
    cout<<i<<endl; 
}