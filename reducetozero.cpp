#include <iostream>
using namespace std;





int countWays(int n, int a, int b) {
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return countWays(n - a, a, b) + countWays(n - b, a, b);
}
int main() {
    int n, a, b;
    cout << "Enter N, A and B: ";
    cin >> n >> a >> b;
    cout << "Number of sequences: "
         << countWays(n, a, b) << endl;
    return 0;
}