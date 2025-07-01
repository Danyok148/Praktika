#include <iostream>
using namespace std;

int main() {

    /*Запитайте у користувача два числа, запишіть їх у змінні а та б,
        поміняйте місцями значення у цих змінних*/
    int a, b;
    cout << " Enter two numbers: ";
    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    /*Запитайте у користувача число, порахуйте кількість цифр в ньому.*/
    int number;
    cout << " Enter a number: ";
    cin >> number;
    int digits = 0;
    if (number == 0) {
        digits = 1;
    }
    else {
        while (number != 0) {
            number = number / 10;
            digits++;
        }
    }
    cout << "Number of digits: " << digits << endl;

    /*Користувач вводить з клавіатури кількість студентів, які склали
        іспит, та кількість «боржників».Обчислити, який відсоток становлять
        «боржники» від загальної кількості студентів, а також який відсоток
        становлять студенти, які склали іспит.*/
    int passed, failed;
    cout << " Enter number of passed students: ";
    cin >> passed;
    cout << "Enter number of failed students: ";
    cin >> failed;
    int total = passed + failed;
    float percentPassed = (float)passed / total * 100;
    float percentFailed = (float)failed / total * 100;
    cout << "Passed: " << percentPassed << "%, Failed: " << percentFailed << "%" << endl;

    return 0;
}

