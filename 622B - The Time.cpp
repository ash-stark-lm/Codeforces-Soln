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

  int h, m, a;
  char colon;
  cin >> h >> colon >> m;

  cin >> a;

  int min = (h * 60 + m + a) % (24 * 60);

  h = min / 60;
  m = min % 60;

  cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m
       << endl;

  return 0;
}