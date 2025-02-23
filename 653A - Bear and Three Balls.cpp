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
  int n;
  cin >> n;
  vi(n);

  sort(v.begin(), v.end());

  // create a vector to store unique lement
  vector<int> unique;
  unique.push_back(v[0]);
  for (int i = 1; i < n; i++) {
    if (v[i] != unique.back()) {
      unique.push_back(v[i]);
    }
  }

  bool ans = false;
  for (int i = 1; i < unique.size() - 1; i++) {
    if (unique[i] - unique[i - 1] == 1 && unique[i + 1] - unique[i] == 1) {
      ans = true;
      break;
    }
  }
  if (ans) {
    YES;
  } else {
    NO;
  }

  return 0;
}