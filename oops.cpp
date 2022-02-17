#include<iostream>

using namespace std;

class Calculator{
    public:
        int inp1, inp2;
        void setInput(int a, int b){
            inp1 = a;
            inp2 = b;
        }
        int add(){
            return inp1+inp2;
        }
        int sub(){
            return inp1-inp2;
        }
        int mul(){
            return inp1*inp2;
        }
        int div(){
            return inp1/inp2;
        }

        // signature of the function which we declared outside of the class
        int addition();

        // passing the object to a function
        int addd(Calculator obj1, Calculator obj2){
            return obj1.inp1 + obj2.inp1;
        }

        // passing and returning an object to a function
        Calculator summation(Calculator obj1, Calculator obj2){
            Calculator obj3;
            obj3.inp1 = obj1.inp1 + obj2.inp1;
            obj3.inp2 = obj1.inp2 + obj2.inp2;
            return obj3; 
        }
};

// function defined out side of the class
int Calculator::addition(){
    return inp1+inp2;
}


int main(){
    int a, b;
    cout << "enter the number 1(obj1): ";
    cin >> a;
    cout << "\nenter the number 2(obj1): ";
    cin >> b;
    Calculator obj1, obj2, obj3;
    obj1.setInput(a, b);

    cout << "enter the number 1(obj2): ";
    cin >> obj2.inp1;
    cout << "\nenter the number 2(obj2): ";
    cin >> obj2.inp2;

    obj3 = obj3.summation(obj1, obj2);
    cout << "new returned value is(using object passing and object returning inp1): " << obj3.inp1;
    cout << "\nnew returned value is(using object passing and object returning inp2): " << obj3.inp2;

    cout << "\nenter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    int op;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nsum of the inputs is: " << obj1.add() << "\n";
        cout << "\nsum of the inputs is(using fuction outside of the class): " << obj1.addition() << "\n";
        cout << "\nsum of the inputs is(passing object): " << obj2.addd(obj1, obj2) << "\n";
        break;
    case 2:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nsubtraction of the inputs is: " << obj1.sub() << "\n";
        break;
    case 3:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\nmultiplication of the inputs is: " << obj1.mul() << "\n";
        break;
    case 4:
        cout << "inputs are " << obj1.inp1 << " and " << obj1.inp2;
        cout << "\ndivision of the inputs is: " << obj1.div() << "\n";
        break;
    
    default:
        break;
    }



    return 0;
}