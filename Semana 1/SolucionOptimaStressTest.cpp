#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>


using namespace std;

long long MaxPairwiseProduct(const std::vector<int>& numbers) {

  long long max_product = 0LL;
  long long aux_product = 0LL;
  int n = numbers.size();

  for (int first = 0; first < n; ++first) {
    for (int second = first + 1; second < n; ++second) {
      aux_product =  (long long) numbers[first] * numbers[second];
      if ( max_product < aux_product)  {
        max_product = aux_product;
      }
    }
  }
  return max_product;
}


int main() {

  srand(time(NULL));

  while(true){
    int n = rand()%10000+2;
    //cin >> n;

    vector<int> numbers(n);


    long long max_product = 0LL;
    long long aux_product = 0LL;

    for (int i = 0 ; i < n ; i ++){
      int number = rand()%100000;
      numbers[i] = number;
      //cin>>number;

      if ( number >= max_product ){
        aux_product = max_product;
        max_product = number;
      }
      else if (number >= aux_product){
        aux_product = number;
      }
      long long rep1 = MaxPairwiseProduct(numbers);
      long long rep2 = max_product*aux_product;
      if (rep1 == rep2){
        cout << "OK" << endl;
      }else{
        cout << "Error" << endl;
        break;
      }
    }
  }
  return 0;
}