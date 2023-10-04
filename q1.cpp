1. Write a program to calculate a^n.

#include <iostream>
using namespace std;
int power(int a,int n){
    if(n==0){
        return 1;
    }
    else{
        return a*power(a,n-1);
    }
}
int main() {
    int a,n;
    cout<<"Enter the value of base:"<<endl;
    cin>>a;
    cout<<"Enter the value of power:"<<endl;
    cin>>n;
    int result= power(a,n);
    cout<<a<<"^"<<n<<"="<<result;
    return 0;
}
