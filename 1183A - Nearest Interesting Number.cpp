#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define inputarr(arr, n)                                                       \
  for (int i = 0; i < n; i++)                                                  \
    cin >> arr[i];

#define fo(i, n) for (int i = 0; i < n; i++)

int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
  int n;
  cin >> n;

  int a = n;

  while (true) {
    if (sum_of_digits(n) % 4 == 0) {
      cout << n << endl;
      break;
    }
    n++;
  }

  return 0;
}