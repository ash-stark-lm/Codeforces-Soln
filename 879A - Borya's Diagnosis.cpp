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

  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }

  int minDays = 0;
  // first neeed to doctor 1 then 2 then 3
  int x = v[0].first;

  for (int i = 1; i < n; i++) {
    int a = v[i].first;
    int b = v[i].second;

    /*
     if (a <= x) {
      int diff = x - a;
      int steps = (diff / b) + 1;
      a += steps * b;
    }
more optimal instead of while loop
    */
    while (a <= x) {
      a += b;
    }
    x = a;
  }
  cout << x << endl;

  return 0;
}