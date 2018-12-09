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
   //FI("input.txt");
   //FO("output.txt");
   int t;
   cin>>t;
   f2(i, t){
        int owned, found, rest, result = 0;
        cin>>owned>>found>>rest;
        owned += found;
        while(owned>=rest){
            result += owned/rest;
            cout<<"Add res = "<<result<<" Rest = ";
            owned = (owned%rest) + (owned/rest);
            cout<<owned<<" divided by "<<rest<<endl;
        }
        cout<<result<<endl;
   }
   return 0;
}
