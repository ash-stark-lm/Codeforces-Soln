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
  vector<int> a(n);
  inputarr(a, n);
  // first and last gets swap odd time sthen incremenet and decrement both gets
  // swap even then odd and so on

  int i = 0, j = n - 1;
  int cnt = 1;
  while (i < j) {
    if (cnt & 1) {
      swap(a[i], a[j]);
    }
    i++;
    j--;
    cnt++;
  }
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
