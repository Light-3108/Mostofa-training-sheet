#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
 
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
 
#define PI 3.14159265358979323846264338327951 
const int MAX_N = 1e5 + 5;
const ll INF = 1e9;
const ld eps = 1e-6;
const int N = 1e5+10; 
const int MOD = 1000000007;
ll lcm(ll a, ll b){
    return (a*b)/(__gcd(a,b));
}
void solve(){
    while(true){
        ll n,t; cin>>n>>t;
        if(n==0 && t==0) break;
        vector<ll> st(n);
        for(int i=0; i<n; i++){
            cin>>st[i];
        }

        while(t--){
            ll mx = 0;
            ll mn = 1e18;

            ll t1; cin>>t1;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    for(int k=j+1; k<n; k++){
                        for(int l=k+1; l<n; l++){

                            ll a = st[i]; ll b = st[j];
                            ll c = st[k]; ll d = st[l];

                            ll x1 = lcm(a,b);
                            ll x2 = lcm(x1,c);
                            ll x3 = lcm(x2,d);

                            ll g = (t1/x3);
                            double g1 = (double(t1)/double(x3));

                            if(abs(g-g1)<=1e-10){
                                mx = max(mx,(g*x3));
                                mn = min(mn,(g*x3));
                            }else{
                                mx = max(mx,((g)*x3));
                                mn = min(mn,((g+1)*x3)); 
                            }

                        }
                    }
                }
            }
            cout<<mx<<" "<<mn<<endl;
        }

    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    //cin >> tc; 
    for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}