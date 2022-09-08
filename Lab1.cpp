#include <iostream>
using namespace std;

class Integer {
private:
    int value;
public:
    Integer() {
        value = 0;
    }

    Integer(int value) {
        this->value = value;
    }

    void setZero() {
        value = 0;
    }

    void showValue() {
        cout << value << endl;
    }

    Integer addInteger(const Integer& int1) {
        Integer int2 = *this;
        int2.value += int1.value;
        return int2;
    }
};

int main()
{
    Integer int1(45);
    Integer int2(56);
    Integer int3 = int1.addInteger(int2);
    cout << "Integer 1 = ";
    int1.showValue();
    cout << "Integer 2 = ";
    int2.showValue();
    //cout << "Integer 3 = ";
    //int3.showValue();
}
