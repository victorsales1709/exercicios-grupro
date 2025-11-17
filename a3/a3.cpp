#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ok(const vector<int>& v_half, int k, int mid){
    int count = 0, dif = 0;
    for(int val : v_half){
        dif = val - mid;
        count += dif;
        if(count > k) return false;
    }
    return true;
    
}

int main(){
    int n,k,mid,val;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0; i<n; ++i){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    vector<int> v_half = vector<int>(v.begin(), v.begin()+(n+1)/2);

    int min_val = v_half.front() - k;
    int max_val = v_half.back();

    while(min_val < max_val){
        mid = min_val + (max_val - min_val) / 2;
        if(ok(v_half, k, mid)){
            max_val = mid;
        } else {
            min_val = mid + 1;
        }
    }

    cout<<max_val;
}