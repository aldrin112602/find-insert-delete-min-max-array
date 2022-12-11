//activity #2
#include <iostream>

using namespace std;
int main() {
  int arr[10] = {
    12,
    30,
    50,
    6,
    1,
    56,
    7,
    80,
    88,
    11
  };
  cout << "Array elements: [ ";
  for (int i = 0; i < 10; i++) {
    cout << arr[i];
    if (i < 9) cout << ", ";
  }
  cout << " ]" << endl;
  int num;
  cout << "Enter element to remove: ";
  cin >> num;
  int i, n = 10, p = 0;

  for (i = 0; i < n; i++) {
    if (arr[i] == num) {
      arr[i] = arr[i + 1];
      p = 1;
    } else if (p > 0) {
      arr[i] = arr[i + 1];
    }
  }
  cout << "New array elements: [ ";
  for (i = 0; i < n - p; i++) {
    cout << arr[i];
    if (i < 8) cout << ", ";
  }
  cout << " ]" << endl;
  return 0;
}
