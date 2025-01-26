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

  // think by parity
  int even_cnt = 0, odd_cnt = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == 0)
      even_cnt++;
    else
      odd_cnt++;
  }
  cout << min(even_cnt, odd_cnt) << endl;

  return 0;
}