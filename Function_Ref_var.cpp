#include<iostream>
using namespace std;
void update(int&n){ //ref.vav
    n++;
}
int main(){
    int i=5;
    cout<<i<<endl;
    update(i);
    cout<<i<<endl;
}
