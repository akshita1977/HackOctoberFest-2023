include <iostream>
#include <algorithm>
using namespace std;

int main() {
int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
int n = sizeof(arr) / sizeof(arr[0]);
sort(arr, arr + n);
cout << "Sorted array in ascending order: ";
for (int i = 0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
return 0;
}
