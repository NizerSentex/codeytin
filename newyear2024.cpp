#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    cout << "Happy New Year Countdown!\n";
    
    for (int i = 10; i > 0; --i) {
        cout << "Time until New Year: " << i << "   \r";
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Happy New Year!\n";
    
    return 0;
}


//Happy New Year 2024
