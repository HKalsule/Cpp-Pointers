#include <iostream>
using namespace std;

int main()
{
    int var = 13;
    int *ptr=&var;
    float var1 = 10.5;
    float *ptr1 = &var1;
    cout << var << endl;   //Value of var
    cout << var1 << endl;   
    cout << *ptr << endl;  //Value at address give by ptr
    cout << *ptr1 << endl; 
    cout << &var << endl;  //Address of var
    cout << &var1 << endl;  
    cout << ptr << endl;   //Value of ptr
    cout << ptr1 << endl;   
    cout << &ptr << endl;  //Address of ptr
    cout << &ptr1 << endl;  

return 0;
}
