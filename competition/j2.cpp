#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int sum = 0;
    int N = 0;
    int k = 0;
    
    cin >> N >> k;
    
    vector<int> shifts(k+1);
    shifts[0] = N;
    
    for(int i = 1; i < shifts.size(); i++) {
        shifts[i] = shifts[i-1] * 10;
    }
    
    for(int i = 0; i < shifts.size(); i++) {
        sum += shifts[i];
    }
    
    cout << sum << endl;
    
    return 0;
}