#include<bits/stdc++.h>
#define f1(i, a) for(int i=0; i<(a); i++)
#define f2(i, a) for(int i=1; i<=(a); i++)
#define HI printf("HI\n")
#define pass printf("PASS")
#define ll long long
#define llu unsigned long long
#define FI(f) freopen(f, "r", stdin)
#define FO(f) freopen(f, "w", stdout)
using namespace std;

int main()
{
   // FI("input.txt");
   // FO("output.txt");
    int t;
    cin>>t;
    f2(i, t){
        int n, k, p, res;
        cin>>n>>k>>p;
        res = (k+p)>n?(k+p)-(((k+p-1)/n)*n):(k+p);
        cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
