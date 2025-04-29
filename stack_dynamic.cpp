#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];  // VLA (not standard C++)
    for (int i = 0; i < n; ++i)
        arr[i] = i + 1;

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}
