/*
4. Greedy Algorithm
Make the best local decision at every step.

Problem: Find the minimum number of coins to make a target amount.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int>& coins, int amount) {
    sort(coins.rbegin(), coins.rend()); // Sort in descending order
    int count = 0;

    for (int coin : coins) {
        if (amount == 0) break;
        count += amount / coin;
        amount %= coin;
    }

    return amount == 0 ? count : -1; // Return -1 if not possible
}

int main() {
    vector<int> coins = {1, 2, 5, 10};
    int amount = 18;
    cout << "Minimum coins required: " << minCoins(coins, amount) << endl;
    return 0;
}


//Optimization problems like activity selection or scheduling.
//Problems involving intervals, like meeting room assignments.