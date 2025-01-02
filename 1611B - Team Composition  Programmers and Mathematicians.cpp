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
#define vi(n) vector<int> v(n);

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b; // 4 mem-> 1 team => a+b mem=> (a+b)/4 team

    int max_possible = (a + b) / 4;
    int mini = min(a, b);
    cout << min(mini, max_possible) << endl;
  }

  return 0;
}