#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;
    int b=5;
    int *ptr1=&b;
    cout << "--Before Swap--" << endl << *ptr << endl << *ptr1 << endl;
    swap (&ptr,&ptr1);
    cout << "--After Swap--" << endl << *ptr << endl << *ptr1;
    return 0;
}
 void swap(int *ptr,int *ptr1)
 {
    int temp = *ptr1;
    *ptr1 = *ptr;
    *ptr = temp;
}
