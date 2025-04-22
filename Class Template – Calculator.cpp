#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    T add() { return a + b; }
    T sub() { return a - b; }
    T mul() { return a * b; }
    T div() { return a / b; }
};

int main() {
    Calculator<int> c1(10, 2);
    Calculator<float> c2(5.5, 2.0);

    cout << c1.add() << " " << c1.sub() << " " << c1.mul() << " " << c1.div() << endl;
    cout << c2.add() << " " << c2.sub() << " " << c2.mul() << " " << c2.div() << endl;
    return 0;
}
