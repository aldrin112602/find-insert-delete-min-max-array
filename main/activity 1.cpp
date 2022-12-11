//activity #1
#include <iostream>

using namespace std;
int find(int arr[], int len, int seek) {
  for (int i = 0; i < len; ++i) {
    if (arr[i] == seek) return i;
  }
  return -1;
}
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
  int i;
  cout << "Enter element to find it's index: ";
  cin >> i;
  int index = find(arr, 10, i);
  cout << "The index of " << i << " is: " << index << endl;
  return 0;
}
