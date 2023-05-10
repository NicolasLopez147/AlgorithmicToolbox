#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string largestConcatenate(vector<string> numbers) {

  stringstream ret;
  for (size_t i = 0; i < numbers.size(); i++) {
    ret << numbers[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  cout << largestConcatenate(a);
}