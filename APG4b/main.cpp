#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  for (int i = 1; i <= n; i++) {
    string op;
    int b;
    cin >> op >> b;

    if (op == "/" && b == 0) {
      cout << "error" << endl;

      return 0;
    }

    if (op == "+") {
      a = a + b;
    } else if (op == "-") {
      a = a - b;
    } else if (op == "*") {
      a = a * b;
    } else if (op == "/") {
      a = a / b;
    }

    cout << i << ":" << a << endl;
  }
}
