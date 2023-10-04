2.Write a program to calculate b^n mod  m.

#include <iostream>
using namespace std;

long long power(long long a, long long n,long long m) {
    if (n == 0) {
        return 1;
    } 
    else if(n % 2==0){
        long long halfpower= power(a, n / 2, m);// Use long long to prevent overflow
        return (halfpower * halfpower) % m;
    }
    else {
        return (a * power(a, n - 1, m) ) % m;
    }
}

int main() {
    int a, n,m;
    cout << "Enter the value of base:" << endl;
    cin >> a;
    cout << "Enter the value of power:" << endl;
    cin >> n;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    
    int result = power(a, n,m);
    
    cout <<"("<< a << "^" << n <<")"<<"mod"<<m<< "=" << result << endl;
    
    return 0;
}
