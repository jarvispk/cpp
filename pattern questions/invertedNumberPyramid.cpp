#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int x = 0;
    for(int i= 0 ; i< a; i++)
    {
        for(int j = 1; j<= a-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
