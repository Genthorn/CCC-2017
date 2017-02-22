#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int A = 0;
    int h = 0;
    int M = 0;
    
    cin >> h;
    cin >> M;
    
    for(int t = 1; t <= M; ++t) {
        A = (-6 * pow(t, 4)) + (h * pow(t, 3)) + (2 * pow(t, 2)) + t;
        
        if(A <= 0) {
            cout << "The balloon first touches ground at hour:" << endl;
            cout << t << endl;
            return 0;
        }
    }
    
    cout << "The balloon does not touch ground in the given time." << endl; 
    
    return 0;
}
