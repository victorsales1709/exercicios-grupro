#include <bits/stdc++.h>
using namespace std;

struct atividade{
    pair<int,int> comeco;
    pair<int,int> fim;   
};

bool comparar(atividade a, atividade b){
    if(a.fim.first < b.fim.first){
        return true;
    } else if(a.fim.first == b.fim.first){
        return a.fim.second < b.fim.second;
    }
    else{
        return false;
    }
}

int main(){
    int N, H1, M1, H2, M2;
    cin>>N;
    vector<atividade> atividades(N);
    for(int i=0; i<N; i++){
        cin>>atividades[i].comeco.first>>atividades[i].comeco.second;
        cin>>atividades[i].fim.first>>atividades[i].fim.second;
    }
    sort(atividades.begin(), atividades.end(), comparar);
    int count = 1;
    int ind = 0;
    vector<atividade> sel;
    sel.push_back(atividades[0]);
    for(int i=1; i<N; i++){
        if(atividades[i].comeco >= atividades[ind].fim){
            count++;
            ind = i;
            sel.push_back(atividades[ind]);
        }
    }
    cout<<sel.size();
}