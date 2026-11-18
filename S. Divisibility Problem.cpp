#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v;
		for(int i=0;i>n;i++){
			int a;
			cin >> a;
			v.push_back(a);
		}
		int sum=0;
		for(int i=0;i<n;i++){
			if(v[i] >= 0 ) {
				sum+=v[i];
			}
	
			else{
				sum-=v[i];
			}
		}
		cout << sum << endl;
	}
}