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
long long lcmFast(long long a, long long b){
    return (a*b)/gdcFast(a,b);
}
int main(){
    long long a,b;
    cin >> a;
    cin >> b;
    cout<< lcmFast(a,b)<<endl;
}