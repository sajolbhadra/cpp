#include <iostream>

using namespace std;

// function definition
int add (int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
int sub(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}
int multi(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}
float division(int num1, int num2)
{
    float result = num1 / num2;
    return result;
}


int main()
{
    int x, y;
    cout << "Input first number: ";
    cin >> x;
    cout << "Input second number: ";
    cin >> y;

    cout << "\n The Summation is : " << add(x, y);
    cout << "\n The Subtraction is : " << sub(x, y);
    cout << "\n The Multiplication is : " << multi(x, y);
    cout << "\n The Division is : " << division(float(x), float(y);

    return 0;
}
