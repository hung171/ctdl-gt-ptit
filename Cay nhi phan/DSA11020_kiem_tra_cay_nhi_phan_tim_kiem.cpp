#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); 
    cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],check=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=a[i-1] && i>0 ) check =0;
        }
        cout<<check<<endl;
	}
	return 0;
}
