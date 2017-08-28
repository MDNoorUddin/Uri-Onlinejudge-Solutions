#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    sort(s.begin(), s.end());
    do {
      cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    cout << endl;
  }

  return 0;
}
