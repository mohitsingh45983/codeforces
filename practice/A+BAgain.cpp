
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin>>n;
        int sum =0;
        while(n>0)
        {
            int digit = n%10;
            sum += digit;
            n = n/10;
        }

        cout<<sum<<endl;
    }
}
