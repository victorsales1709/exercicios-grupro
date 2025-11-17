#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, q, preco, m;
    cin>>n;
    vector<int> precos(n);
    
    for(int i=0; i<n; ++i){
        cin>>precos[i];
    }
    
    sort(precos.begin(), precos.end());

    cin>>q;
    
    for(int i=0; i<q; i++){
        cin>>m;
        auto it = upper_bound(precos.begin(), precos.end(), m);
        cout << (it - precos.begin()) << "\n";
    }
}