//activity #3
#include <iostream>

using namespace std;
int main() {
  int arr_1[10] = {
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
  int arr_2[10];
  cout << "Array 1 elements: [ ";
  for (int i = 0; i < 10; i++) {
    cout << arr_1[i];
    //Copying array to to array 2 using for loop
    arr_2[i] = arr_1[i];
    if (i < 9) cout << ", ";
  }
  cout << " ]" << endl;
  cout << "Array 2 elements: [ ";
  for (int i = 0; i < 10; i++) {
    cout << arr_2[i];
    if (i < 9) cout << ", ";
  }
  cout << " ]" << endl;
  return 0;
}
