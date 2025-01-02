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
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    inputarr(a, n);
    inputarr(b, n);

    int maxa = 0, maxb = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] > b[i])
        swap(a[i], b[i]);

      maxa = max(maxa, a[i]);
      maxb = max(maxb, b[i]);
    }

    cout<<maxa*maxb<<endl;
  }

  return 0;
}