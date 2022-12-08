// program to check if a number is power of 2
#include<iostream>

using namespace std;

bool check(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    int x;
    cout << "Enter the number: " << endl;
    cin >> x;
    if (check(x) == true)
        cout << "The number is power of 2.";
    else 
        cout << "The number is not power of 2.";
    return 0;
}
