#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, x, y;
    cin >> n >> x >> y;

    double wed, Tue, Th, Fri;
    
    Tue = n / (1 - (y / 100.0) * (1 - x / 100.0));
    
    wed = Tue * (1 - x / 100.0);
    
    Th = wed * (1 - y / 100.0);
    
    Fri = Th;
    
    cout << fixed << setprecision(4) << n << " " << Tue << " " << wed << " " << Th << " " << Fri << endl;

    return 0;
}
