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

  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;
    vi(n);
    int x = 1;
    int timer = b - 1;
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
      x = min(x + v[i], a);
      timer += x - 1; // use tool at x=1 only
      x = 1;
    }
    cout << timer + x << endl;

    /*
    int timer = b; // b->0 time laga b and then in between time calcuate
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
      timer += min(a - 1, v[i]); // 1 - a => a-1 time
    }
    cout << timer << endl;*/
  }

  return 0;
}