#include <iostream>
using namespace std;

int main() {
  int n = 10, s = 0;

  for (int i = 1; i <= n; i++) {
    s += i; // O(n)
  }

  s = 0;

  s = n * (n + 1); // O(1)

  return 0;
}
