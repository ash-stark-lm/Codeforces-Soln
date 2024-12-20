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

  sort(arr.begin(), arr.end());

  fo(i, n) cout << arr[i] << " ";

  return 0;
}