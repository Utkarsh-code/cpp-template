#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x, y;
        cin>>x>>y;

        x=x-1;
        y=y-1;
        int ans=INT_MIN;
        for(int i=x; i<=y; i++){
            int sum=0;
            for(int j=i; j<=y; j++){
                sum+=arr[j];
                ans=max(ans, sum);
            }
        }
        cout<<ans<<"\n";
    }
    
}