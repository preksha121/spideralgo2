#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main() {
    lli n,k,p,q,sum,i,j,maxa=0,x=0;
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);
cout.tie(NULL);
//input of length of array and no of queries
    cin>>n>>k;
    lli a[n+5];
//initialized array with zero
    memset(a,0,sizeof(a));
    for(i=0;i<k;i++)
    {
	//input of indices and the value with which indices should be updated
        cin>>p>>q>>sum;
    //added sum to the elemnt at index p
        a[p]+=sum;
    //subtracted sum from the element at index q+1 if q+1<=n
        if((q+1)<=n) a[q+1]-=sum;
    }int u;
    for(i=1;i<=n;i++)
    {
       x=x+a[i];
    //after finding each value of x added i to it and compared it with maxa 
       if(maxa<(x+i)) {maxa=x+i;}

    }
//output maxa
    cout<<maxa;
    return 0;
}
