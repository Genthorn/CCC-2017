#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    
    //starting
    int a = 0, b = 0;
    
    //distination
    int c = 0, d = 0;
    
    int charge = 0;
    
    cin >> a >> b;
    cin >> c >> d;
    cin >> charge;
    
    int dx = 0;
    int dy = 0;
    
    dx = abs(a - c);
    
    dy = abs(b - d);
    
    if((dx + dy) == charge) {
        cout << "Y" << endl;
    } else if ((dx + dy) > charge) {
        cout << "N" << endl;
    } else if ((dx + dy) < charge) {
        
        for(int i = 4; i < 100000; i += 2) {
            if((dx + dy) + charge == i) {
                cout << "Y" << endl;
                return 0;
            }
        }
        
        cout << "N" << endl;
    } 
    
    return 0;
}