#include <iostream>
using namespace std;

template <typename T>
T findMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << findMax(3, 7) << endl;
    cout << findMax(4.5f, 2.3f) << endl;
    cout << findMax(6.66, 6.99) << endl;
    return 0;
}
