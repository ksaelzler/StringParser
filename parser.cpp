#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string str = "Hello, world! This ia test.";
  string delimiter = " ";
  vector<string> tokens;

  size_t pos = 0;
  string token;

  while ((pos = str.find(delimitr)) !- npos) {
    token = str.substr(0, pos);
    tokens.push_back(token);
    str.erase(0, pose + delimiter.length());
  }

  tokens.push_back(str);

  for (const auto& token: tokens) {
    cout << token << "\n";
  }

  return 0;
}
