#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back

int main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  string s;
  cin >> s;

  int n = s.size();
  // chck for 1 digit

  for (int i = 0; i < n; i++) {
    if (s[i] == '8') {
      cout << "YES" << endl;
      cout << 8 << endl;
      return 0;
    }
    if (s[i] == '0') {
      cout << "YES" << endl;
      cout << 0 << endl;
      return 0;
    }
  }

  // check for 2 digit
  if (n >= 2) {

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int num = (s[i] - '0') * 10 + (s[j] - '0');
        if (num % 8 == 0) {
          cout << "YES" << endl;
          cout << num << endl;
          return 0;
        }
      }
    }
  }
  if (n >= 3) {

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
          if (num % 8 == 0) {
            cout << "YES" << endl;
            cout << num << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
