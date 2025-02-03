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

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int misha_points = max(3 * a / 10, a - ((a / 250) * c));
  int vasya_points = max(3 * b / 10, b - ((b / 250) * d));

  if (misha_points > vasya_points)
    cout << "Misha" << endl;
  else if (misha_points < vasya_points)
    cout << "Vasya" << endl;
  else
    cout << "Tie" << endl;

  return 0;
}