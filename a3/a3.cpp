#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> h;
    int n, x; 
    int mv=0; 
    int area = 0;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        h.push_back(x);
    }

    int l = 0;
    int r = h.size()-1;

    while(l<r){
        area = (r-l) * (min(h[l],h[r]));
        if (area > mv){
            mv = area;
        }
        if(h[l]<h[r]){
            l++;
        }
        else{
            r--;
        }
    }

    cout<<mv;
}