#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  inputarr(arr, n);

  int maxi = 1, cnt = 1;
  fo(i, n - 1) {
    if (arr[i + 1] >= arr[i])
      cnt++;
    else {
      cnt = 1;
    }
    maxi = max(maxi, cnt);
  }
  cout << maxi << endl;
  return 0;
}
