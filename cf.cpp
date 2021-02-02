#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

map<int, int> mp;
vector<int> arr;
vector<int> ans;
bool fun(){
    int n=arr.size();
    int sum=arr[n-1];
    arr[n-1]=-1;
    ans.push_back(sum);
    ans.push_back(0);
    int idx=1;
    while(idx<n){
        int flag=0;
         for(int i=0; i<n; i++){
             int k=arr[i];
             if(k>0){
                    if(mp.find(sum-k)!=mp.end()){
                       // sum=max(k,sum-k);
                        arr[i]=-1;
                        arr[mp[sum-k]]=-1;
                        ans.push_back(k);
                        ans.push_back(sum-k);
                        sum=max(k,sum-k);
                        flag=1;
                        break;
                    }
             }
         }
         if(flag==0) return false;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
   // int arr[2*n];
    for(int i=0; i<2*n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
        mp.insert({a, i});
    }
    sort(arr.begin(), arr.end());

    bool fl=fun();
    if(f1==false) cout<<"NO\n";
    else{
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>0) {ans[1]=arr[i];  break;}
        }
        cout<<"YES\n";
        int sum=ans[0]+ans[1];
        cout<<sum;
        for(int i=0; i<ans.size(); i++){
               if(i%2==0) cout<<"\n";
               cout<<arr[i];
        }
    }
   }
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

   int tc;
   cin>>tc;
   for(int i=1; i<=tc; i++){
   //  cout << "Case #" << i  << ": ";
        solve();
    }
}