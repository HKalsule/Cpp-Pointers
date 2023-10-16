#include <iostream>
using namespace std;

int main()
{
    int i;
    int var[5] = {1,2,3,4,5};
    int *ptr=&var[0];
    for (i=0;i<5;i++)
    {
    cout << *ptr << endl;
    ptr++
    }
    return 0;
}