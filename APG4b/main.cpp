#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  int i = 0;
  string result = "A:";

  while (i < A) {
    result.push_back(']');

    i++;
  }

  cout << result << endl;

  i = 0;
  result = "B:";

  while (i < B) {
    result.push_back(']');

    i++;
  }

  cout << result << endl;
}
