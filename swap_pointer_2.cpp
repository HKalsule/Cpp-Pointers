#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << " Enter the value of first number : " << endl;
    cin >> a;
    int b;
    cout << " Enter the value of second number : " << endl;
    cin >> b;
    cout << "--Before Swap--" << endl;
    cout << "Value of A is : " << a << endl;
    cout << "Value of B is : " << b << endl;
    swap (a,b);
    cout << "--After Swap--" << endl;
    cout << "Value of A is : " << a << endl;
    cout << "Value of B is : " << b << endl;
    return 0;
}
 void swap(int a,int b)
 {
    int temp = b;
    b = a;
    a = temp;
}