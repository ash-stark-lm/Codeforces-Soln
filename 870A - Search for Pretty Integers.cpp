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

  int n, m;
  cin >> n >> m;

  set<int> firstSet, secondSet;
  int x, y;

  for (int i = 0; i < n; i++) {
    cin >> x;
    firstSet.insert(x);
  }

  for (int i = 0; i < m; i++) {
    cin >> y;
    secondSet.insert(y);
  }

  for (int i = 1; i <= 9; i++) {
    if (firstSet.count(i) && secondSet.count(i)) {
      cout << i << endl;
      return 0;
    }
  }

  int minFirst = *firstSet.begin();
  int minSecond = *secondSet.begin();

  cout << min(minFirst * 10 + minSecond, minSecond * 10 + minFirst) << endl;
  return 0;
}