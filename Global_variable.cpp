#include<iostream>
using namespace std;
int score=15;//Here score is global variable
void a(int n){
    cout<<"In a="<<score<<endl;
}
void b(int n){
        cout<<"In b="<<score<<endl;
}
int main(){
    int i=5;
    a(i);
    b(i);
    cout<<"In main="<<score<<endl;
}