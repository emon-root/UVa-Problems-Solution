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
   cout<<"Lumberjacks:"<<endl;
   f2(i, t){
        int arr[11];
        int flag;
        f1(i, 10){
            cin>>arr[i];
            if(i==1 && arr[i-1]<arr[i]){
                flag=1;
            }
            if(i==1 && arr[i-1]>arr[i]){
                flag=0;
            }
        }
        int ordered = 0;
        if(flag==1){
            f1(i, 9){
                if(!(arr[i]<arr[i+1])){
                    ordered = 1;
                    //HI;
                    //cout<<i<<endl;
                    break;
                }
            }
        }else if(flag == 0){
            f1(i, 9){
                if(!(arr[i]>arr[i+1])){
                    ordered = 1;
                  //  HI;
                    //cout<<i<<endl;
                    break;
                }
            }
        }
        if(ordered==1){
            cout<<"Unordered"<<endl;
        }
        else
            cout<<"Ordered"<<endl;
   }
   return 0;
}
