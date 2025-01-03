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

  char arr[n][5];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }

  bool flag = false;
  for (int i = 0; i < n; i++) {
    if (arr[i][0] == 'O' && arr[i][1] == 'O') {
      flag = true;
      arr[i][0] = '+';
      arr[i][1] = '+';
      break;
    } else if (arr[i][3] == 'O' && arr[i][4] == 'O') {
      flag = true;
      arr[i][3] = '+';
      arr[i][4] = '+';
      break;
    }
  }
  if (!flag)
    NO;
  else {
    YES;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 5; j++) {
        cout << arr[i][j];
      }
      cout << endl;
    }
  }

  return 0;
}