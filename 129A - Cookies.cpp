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

  int cnt_even = 0, cnt_odd = 0;
  for (int x : v) {
    if (x % 2 == 0)
      cnt_even++;
    else
      cnt_odd++;
  }

  if (cnt_odd % 2 == 0) {
    cout << cnt_even << endl;
  } else {
    cout << cnt_odd << endl;
  }

  return 0;
}