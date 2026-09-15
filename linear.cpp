#include <iostream>
using namespace std;

int linear_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[20];
    cout << "enter the size of the array:";
    cin >> n;
    cout << "enter" << n << "integersa:"<< endl;
    for (int i = 0 ; i < n;i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "enter the target element to search for :";
    cin >> x;
    int location = linear_search(a,n,x);
    if (location != -1)
    {
        cout << "element" << x << " found at index;" << location <<endl;
    }
    else
    {
        cout << "element" << x << "not found in the array." <<endl;
    }
    return 0;
}