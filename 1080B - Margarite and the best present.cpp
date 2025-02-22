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

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    // S(l,r)=S(1,r)−S(1,l−1)
    //  s(1,n)=-(n+1)/2 if n is odd and n/2 if n is even
    int s1_r = 0;
    if (r % 2 == 0) {
      s1_r = r / 2;
    } else {
      s1_r = -(r + 1) / 2;
    }

    int s1_l = 0;
    if ((l - 1) % 2 == 0) {
      s1_l = (l - 1) / 2;
    } else {
      s1_l = -(l) / 2;
    }
    int ans = s1_r - s1_l;
    cout << ans << endl;
  }

  return 0;
}
