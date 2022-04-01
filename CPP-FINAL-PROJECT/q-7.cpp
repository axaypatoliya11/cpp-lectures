#include <iostream>

using namespace std;

int main(){

    int length, breadth;

    int area, area1;

    cout << "Enter the Length: " << endl;

    cin >> length;

    cout << "Enter the breadth: " << endl;

    cin >> breadth;

    area = length * breadth;

    for (int i = 1; i <= length && i <= breadth; i++){

        if (length % i == 0 && breadth % i == 0){

            area1 = area / (i * i);
        }
    }

    cout << "Minimum possible squares are: " << area1 << endl;

    return 0;
}