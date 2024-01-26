#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

vector<vector<vector<int>>> memo(1001, vector<vector<int>>(1001, vector<int>(31, -1)));  // memoization table

int minMoves(int x, int y, int m, int a, int b) {
    if (x > a || y > b) {  // base case: we've overshot the target
        return INT_MAX;    // return a large number to indicate failure
    }
    if (x == a && y == b) {  // base case: we've reached the target
        return 0;           // return 0 to indicate success
    }
    if (memo[x][y][m] != -1) {  // if we've already computed this value, return it
        return memo[x][y][m];
    }
    int jump1 = minMoves(x+m, y, m, a, b);  // try jumping in x direction
    int jump2 = minMoves(x, y+m, m, a, b);  // try jumping in y direction
    int inc = minMoves(x, y, m+1, a, b);    // try increasing leg length
    int result = 1 + min(jump1, min(jump2, inc)); // return the minimum of the three options
    memo[x][y][m] = result;  // store the result in the memoization table
    return result;
}

int main() {
    int t;  // number of test cases
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;  // target coordinates for current test case
        int result = minMoves(0, 0, 1, a, b);
        if (result == INT_MAX) {

        } else {
            cout <<  result << endl;
        }
        // clear the memoization table for the next test case
        for (int i = 0; i <= a; i++) {
            for (int j = 0; j <= b; j++) {
                for (int k = 0; k <= 30; k++) {
                    memo[i][j][k] = -1;
                }
            }
        }
    }
    return 0;
}
