#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long max_product = 0LL;
	long long aux_product = 0LL;

  for (int i = 0 ; i < n ; i ++){
    int number;
    cin>>number;

    if ( number >= max_product ){
      aux_product = max_product;
      max_product = number;
    }
    else if (number >= aux_product){
      aux_product = number;
    }
  }
  cout<< max_product*aux_product <<endl;
  return 0;
}