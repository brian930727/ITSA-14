#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, rev = 0;
    cin>>num;
    temp = num;

    // �N�Ʀr�˧ǱƦC
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp=temp/ 10;
    }

    // �P�_�O�_���j��
    if (num == rev) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
