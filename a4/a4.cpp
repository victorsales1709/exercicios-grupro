#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h,x;
    vector<int> a;

    cin>>n>>h;
    for(int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }

    int sum=0;
    int l=0, maxCount=0;

    for(int r=0; r<n; ++r){
        sum+=a[r];
        while(sum>h){
            sum-=a[l];
            l++;
        }
        maxCount=max(maxCount, r-l+1);
    }

    cout<<maxCount;
}