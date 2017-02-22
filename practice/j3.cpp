#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    int n = 0;
    cin >> n;
    
    vector<int> r (1001);
    
    vector<int> mc (0);
    vector<int> smc (0);
    int mci = 0;
    int smci = 0;
    
    //Add 1 occurence to position typed
    for(int i = 0; i < n; i++) {
        int t = 0;
        cin >> t;
        r[t]++;
    }
    
    //find most common and second most common occurence values
    for(int i = 1; i <= 1000; i++) {
        if(r[i] >= mci) {
            if(r[i] > mci) smci = mci;
            mci = r[i];
        } else if(r[i] >= smci) {
            smci = r[i];
        }
    }
    
    //find all numbers that have those occurrence values
    for(int i = 1; i <= 1000; i++) {
        if(r[i] == mci) {
            mc.push_back(i);
        } else if(r[i] == smci) {
            smc.push_back(i);
        }
    }
    
    //print answer
    if(mc.size() == 1 && smc.size() == 1) {
        cout << abs(mc[0] - smc[0]) << endl;
    } else if(mc.size() >= 2) {
        cout << abs(mc[mc.size()-1] - mc[0]) << endl;
    } else if(mc.size() == 1 && smc.size() >= 2) {
        if(smc[0] >= mc[0]) {
            cout << abs(smc[smc.size()-1] - mc[0]) << endl;
        } else {
            cout << abs(mc[0] - smc[0]) << endl;
        }
    }
    
    return 0;
}
