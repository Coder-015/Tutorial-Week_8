#include <iostream>
using namespace std;

template <typename T>
T display(T val) {
    cout << val << endl;
    return val;
}

int main() {
    display(5);
    display(3.14f);
    display("Hello");
    return 0;
}
