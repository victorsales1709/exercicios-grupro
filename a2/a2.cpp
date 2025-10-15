#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k,mid,val;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0; i<n; ++i){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    for(int i=0; i<k; i++){
        mid = n/2;
        val = v[mid] - 1;
        v.erase(v.begin()+mid);
        auto it = lower_bound(v.begin(), v.end(), val);
        v.insert(it,val);
    }

    cout<<v[n/2];
}