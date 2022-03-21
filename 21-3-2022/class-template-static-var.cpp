#include <iostream>

using namespace std;

template <typename T>
class Test{
    T val;

public:
    static int count;
    Test(){
        count++;
    }
};

template <typename T>
int Test<T>::count = 0;

int main(){
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count << endl;
    cout << Test<double>::count << endl;

    // getchar();
    return 0;
}