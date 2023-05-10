#include <iostream>
#include <vector>
using namespace std;


long long fastFibonacci(long long n){
    if(n < 2){
        return n;
    }
    long long aux1 = 0;
    long long aux2 = 1;
    long long numero = 1;
    for (long long i  = 0; i < n-1 ; i ++){
        aux2 = numero;
        numero = (numero + aux1)%10;
        aux1 = aux2;
    }
    return numero;
}
int main(){
    long long number;
    cin >> number;
    cout << fastFibonacci(number)<<endl;
}