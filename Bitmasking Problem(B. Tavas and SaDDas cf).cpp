
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char arr[20];
    cin>>arr;
    ll digits=strlen(arr);
    ll ans=0;
    ans=(1<<digits)-2;/*This line uses bit-shifting to set the initial value of ans. The expression 1 << digits means shifting the number 1 to the left by digits positions in binary, which effectively calculates 
2^digits.The result is decremented by 2 to account for certain predefined calculations related to the number of valid combinations of '4' and '7'.
*/
    for(ll i=digits-1,count=0;i>=0;i--,count++)
    {
        if(arr[i]=='7')
            ans+=(1<<count);//Inside the loop, this condition checks if the current digit is '7'. If it is, the value (2^count) is added to ans. This process identifies positions where '7' appears and updates the result accordingly.
    }
    cout<<(ans+1)<<endl;//Finally, the program prints ans + 1. The +1 adjusts the final value to account for the required 1-based indexing of the result.
return 0;
}
