#include<iostream>
using namespace std;
long long gdcFast(long long a, long long b){
    while(b != 0 ){
        long long aux = a%b;
        a = b;
        b = aux;
    }
    return a;
}
int main(){
    long long a,b;
    cin >> a;
    cin >> b;
    cout<< gdcFast(a,b)<<endl;
}