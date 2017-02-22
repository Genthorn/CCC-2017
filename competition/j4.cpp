#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int D = 0;
    int as = 0;
    bool t = true;
    
    cin >> D;
    
    int hour = 12;
    int min = 00;
    
    vector<int> evalTime(4);
    
    for(int i = 0; i < D; ++i) {
        ++min;
        
        if(hour == 12 && min == 60) {
            hour = 1;
            min = 0;
        }
        
        if(min == 60) {
            min = 0;
            ++hour;
        }
        
        evalTime[0] = (hour/10) % 10;
        evalTime[1] = hour % 10;
        evalTime[3] = min % 10;
        
        if(min < 10) {
            evalTime[2] = 0;
        } else {
            evalTime[2] = (min/10) % 10;
        }
        
        int dif10 = (evalTime[1] - evalTime[0]);
        int dif21 = (evalTime[2] - evalTime[1]);
        int dif32 = (evalTime[3] - evalTime[2]);
        
        if(hour < 10) {
            if(dif21 == dif32) {
                ++as;
            }
        } else {
            if(dif10 == dif21 && dif32 == dif21) {
                ++as;
            }
        }
    }
    
    cout << as << endl;
    
    return 0;
}