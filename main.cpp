#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, rev = 0;
    cin>>num;
    temp = num;

    // 將數字倒序排列
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp=temp/ 10;
    }

    // 判斷是否為迴文
    if (num == rev) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
