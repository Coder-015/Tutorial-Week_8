#include <iostream>
using namespace std;

template <typename T>
class Storage {
    T data;
public:
    Storage(T d) { data = d; }
    T get() { return data; }
};

int main() {
    Storage<int> s1(10);
    Storage<float> s2(3.14f);
    Storage<string> s3("Data");

    cout << s1.get() << "\n" << s2.get() << "\n" << s3.get();
    return 0;
}
