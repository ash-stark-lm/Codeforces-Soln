#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    bool insert = false;
    int idx = 0;
    for (int i = 0; i < s.length() - 1; i++) {
      if (s[i] == s[i + 1]) {
        insert = true;
        idx = i + 1;
        break;
      }
    }

    vector<int> f(26, 0);
    for (auto &ch : s) {
      f[ch - 'a']++;
    }
    char ch;
    for (int i = 0; i < 26; i++) {
      if (f[i] == 0) {
        ch = 'a' + i;
        break;
      }
    }

    if (!insert) {
      s += ch;
    } else {
      s = s.substr(0, idx) + ch + s.substr(idx);
    }

    cout << s << endl;
  }
  return 0;
}