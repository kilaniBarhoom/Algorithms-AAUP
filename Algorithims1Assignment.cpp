#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long factR(int n) {

    if(n == 0)
        return 1;
    return n * factR(n - 1);
}

void factI(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
}

int main()
{


    auto t1 = high_resolution_clock::now();
    factI(20);
    auto t2 = high_resolution_clock::now();

    /* Getting number of milliseconds as an integer. */
    double time = (duration_cast<nanoseconds>(t2 - t1)).count();
    cout << time << "milliseconds" << endl;
    return 0;
}
