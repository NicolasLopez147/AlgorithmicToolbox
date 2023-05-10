#include <iostream>
using namespace std;

long long moneyChange(long long money){
    long long coins = 0;

    coins = money/10;
    money %=10;
    coins += money/5;
    money %= 5;
    coins += money;
    return coins;
}
int main (){
    long long money;
    cin >> money;
    cout << moneyChange(money)<<endl;
}