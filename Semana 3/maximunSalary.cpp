#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string largestConcatenate(vector<string> numbers) {
	std::stringstream ret;
	std::sort(numbers.begin(), numbers.end(), [](const string& numbers, const string& b) {
		return (numbers + b) < (b + numbers);
	});
	std::reverse(numbers.begin(), numbers.end());

	for (auto&& i : numbers) { ret << i; }
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