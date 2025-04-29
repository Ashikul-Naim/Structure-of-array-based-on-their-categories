#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int* arr = new int[n];  // Dynamic size and heap allocation

    for (int i = 0; i < n; ++i)
        arr[i] = i * 2;

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    delete[] arr;  // Free memory
    return 0;
}
