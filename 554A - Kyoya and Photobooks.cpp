#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define endl "\n"
#define pb push_back
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define int long long
#define vi(n)                                                                  \
  vector<int> v(n);                                                            \
  inputarr(v, n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  string s;
  cin >> s;
  set<string> st;

  // Try inserting each letter 'a' to 'z'
  for (char c = 'a'; c <= 'z'; c++) {
    // inserting the character at each position in the string
    for (int i = 0; i <= s.size(); i++) {
      string a = s.substr(0, i) + c + s.substr(i);
      st.insert(a);
    }
  }

  cout << st.size() << "\n";

  return 0;
}
