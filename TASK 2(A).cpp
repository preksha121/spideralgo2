#include<bits/stdc++.h>
#define lli long long int
using namespace std;
//return length
lli co(string s)
    {lli sum=0;
    lli curr=0;
    lli i;
    //traverse the string
    for ( i = 0; i < s.length(); i++) { 
    //if < then 1 is added to sum
        if (s[i] == '<') 
            sum += 1;
        else
    // > then 1 is subtracted from sum
            sum-=1;
    // if the first symbol is > then this will help
        if (sum < 0) 
            break;
    // if sum is 0 store the index value
        if (sum == 0) 
            curr = i + 1; 
    }
    return curr;}
  
int main()
    {lli t,n;
    string s;
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
        {cin>>s;
        lli x=co(s);
        cout<<x<<"\n";
        }
        return 0;
    }
      
