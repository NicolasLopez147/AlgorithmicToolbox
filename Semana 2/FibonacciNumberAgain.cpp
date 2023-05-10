#include <iostream>
#include <vector>
using namespace std;
long long sillyFibonacci(long long number){
    if (number <= 1){
        return number;
    }else{
        return sillyFibonacci(number-1)+sillyFibonacci(number-2);
    }
}

long long fastFibonacciModule(long long n, long long m){
    if(n < 2){
        return n;
    }
    long long aux1 = 0;
    long long aux2 = 1;
    long long numero = 1;
    for (long long i  = 0; i < n-1 ; i ++){
        aux2 = numero;
        numero += aux1;
        aux1 = aux2;
    }
    return numero % m;
}
int main(){
    long long number,m;
    cin >> number;
    cin >> m;
    cout << fastFibonacciModule(number,m)<<endl;
}