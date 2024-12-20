#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> f(26, 0);
    fo(i, n) { f[s[i] - 'a']++; }

    int max_idx = 0;
    int maxi = 0;
    int min_idx = 0;
    int mini = INT_MAX;

    fo(i, 26) {
      if (f[i] > maxi) {
        maxi = f[i];
        max_idx = i;
      }
    }

    fo(i, 26) {
      if (f[i] > 0 && f[i] < mini && i != max_idx) {
        mini = f[i];
        min_idx = i;
      }
    }

    char ch1 = 'a' + max_idx;
    char ch2 = 'a' + min_idx;
    fo(i, n) {
      if (s[i] == ch2) {
        s[i] = ch1;
        break;
      }
    }
    cout << s << endl;
  }
  return 0;
}
