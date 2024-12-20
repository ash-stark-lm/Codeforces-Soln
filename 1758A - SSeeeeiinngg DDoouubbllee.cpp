#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    string t;
    for (int i = 0; i < s.size(); i++) {
      t += s[i];
      t += s[i];
    }

    vector<char> v(t.size());
    int i = 0, j = 1;
    int start = 0, end = v.size() - 1;
    while (start < end) {
      v[start] = t[i];
      v[end] = t[j];
      i += 2;
      j += 2;
      start++;
      end--;
    }
    string p;
    for (int i = 0; i < v.size(); i++) {
      p += v[i];
    }
    cout << p << endl;
  }

  return 0;
}