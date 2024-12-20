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
  int totalSum = 0;
  fo(i, n) { totalSum += arr[i]; }

  sort(arr.begin(), arr.end());
  int half = totalSum / 2;
  int cursum = 0;
  int min_coins = 0;
  for (int i = n - 1; i >= 0; i--) {
    cursum += arr[i];
    min_coins++;
    if (cursum > half) {
      break;
    }
  }

  cout << min_coins << endl;

  return 0;
}