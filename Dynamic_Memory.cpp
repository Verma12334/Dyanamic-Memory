#include<iostream>
using namespace std;
int main(){
    int*ptr=new int;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(int)<<endl;

    int *arr=new int[5];
    char*ch=new char[5];
    double *a=new double[9];
    float *v=new float[11];
    long *c=new long[13];
}