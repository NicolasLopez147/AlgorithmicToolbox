#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct item
{
    /* data */
    long long cost;
    long long weight;
    long long value;
};

long long MaximumValueLoot(long long w, vector <item> &items){
    sort(items.begin(),items.end());
    for (auto& ele :items){
        cout << ele.cost <<endl;
    }
}

int main (){
    long long n , w, cost, weight;
    cin >> n >> w;
    vector <item> items;
    for (int i = 0 ; i < n ; i ++){
        cin >> cost >> weight;
        item item ;
        item.cost = cost;
        item.weight = weight;
        item.value = cost/weight;
        items.emplace_back(item);
    }
    MaximumValueLoot(w,items);


}