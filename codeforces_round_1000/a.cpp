#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;


// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if two numbers are coprime
bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int i = a,j =a+1;
        int cnt = 0;
        if(a==1)
        {
            i =a+1,j=a+2;
            cnt = 1;
        }
        
        while(j<= b)
        {
            if(areCoprime(i,j)){
                cnt++;
                i = j;
                j++;
            }
            else{
                 i++;
                 j++;
            }
        }
        cout<< cnt<<endl;

    }

}






// #include <bits/stdc++.h>
// // #include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;



// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;

//        if(a==1,b==1) cout<<1<<endl;
//        else{
//         cout<<b-a<<endl;
//        }

//     }

// }