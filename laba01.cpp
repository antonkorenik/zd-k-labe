#include <iostream>

using namespace std;

int countDig(int);
int number;
int a, Rnum, s;

int reverse_number(int number)
{
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }
    return n;
}

int main()
{
    cout << "Input number: ";
    cin >> number;
    cout << "\nIn number " << number << ' ' << countDig(number) << " digit(s)" <<endl;

    if (number == reverse_number(number))
        cout << number << " Palindrome" << endl;
    else
        cout << "Not a palindrome " << endl;

    for (int i = 0; i <= countDig(number); i = i + 2)
    {
        s += number;
    }
    cout << "Sum = " << s << endl;
    while (number != 0)
    {
        Rnum *= 10;
        Rnum += number % 10;
        number = number / 10;
    }
    cout << "Reverse number: " << Rnum << endl;
    return number;
}

int countDig(int num)
{
    if (num == 0) return 1;

    int k = 0;
    while (num != 0)
    {
        num = num / 10;
        ++k;
    }
    return k;
}