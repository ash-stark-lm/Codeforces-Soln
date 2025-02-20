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
  vi(n);

  vector<int> ans;

  int total = 0;
  int prev_pages = 0;
  // Track the cumulative pages turned up to the previous day

  for (int x : v) {
    total += x;
    int pages = total / m;      // Cumulative pages turned so far
    ans.pb(pages - prev_pages); // Pages turned on the current day
    prev_pages = pages;         // Update the previous cumulative pages
  }

  for (int a : ans)
    cout << a << " ";
  cout << endl;

  return 0;
}
