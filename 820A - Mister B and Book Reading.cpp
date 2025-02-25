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

  int c, v0, v1, a, l;
  cin >> c >> v0 >> v1 >> a >> l;
  int days = 1;

  int pages = v0;
  while (pages < c) {
    pages -= l;
    int pg_read = v0 + (days)*a;
    if (pg_read > v1) {
      pg_read = v1;
    }

    pages += pg_read;
    days++;
  }
  cout << days << endl;

  return 0;
}