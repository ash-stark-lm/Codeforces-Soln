
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  string s;
  cin >> s;

  int n = s.length();
  bool valid = false;
  fo(i, n) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      valid = true;
      break;
    }
  }
  cout << (valid ? "YES" : "NO") << endl;

  return 0;
}