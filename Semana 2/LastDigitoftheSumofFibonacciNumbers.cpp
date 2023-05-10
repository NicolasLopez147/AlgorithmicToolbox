#include <iostream>
using namespace std;

long long SumSquaresFibonacciNumbers(long long n){

    if(n < 2){
        return n;
    }

    long long aux1 = 0;
    long long aux2 = 1;
    long long numero = 1;
    long long sum = numero + aux1;

    for (long long i  = 0; i < n-1 ; i ++){
        aux2 = numero;
        numero = numero + aux1;
        aux1 = aux2;
        sum = (sum + numero)%10;
    }
    return sum;
}

int main (){
    long long number;
    cin >> number;
    cout << SumSquaresFibonacciNumbers(number)%10 << endl;
}