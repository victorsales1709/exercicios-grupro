#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> angles;


int operation(int num1, int num2, int signal){
    return num1 + signal * num2; 
}

bool sumAngles(int product, int idx){
    if(idx == N){
        return product % 360 == 0;
    }

    if(sumAngles(operation(product, angles[idx], 1), idx+1)){
        return true;
    }

    if(sumAngles(operation(product, angles[idx], -1), idx+1)){
        return true;
    }

    return false;
}

int main() {
    cin >> N;
    angles.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> angles[i];
    }

    if (sumAngles(0, 0)) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl; 
    }

    return 0;
}