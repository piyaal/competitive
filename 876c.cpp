#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e6+10;
using namespace std;
map<pair<int,int>, int> memo;
int calculateScore(vector<vector<int>>& adjacency, int parent, int current) {
    int score = 0;
    for (int i = 0; i < adjacency[current].size(); i++) {
        if (adjacency[current][i] == parent)
            continue;

        int x = 0;
        if (memo[{parent, current}] > memo[{current, adjacency[current][i]}])
            x++;

        score = max(score, x + calculateScore(adjacency, current, adjacency[current][i]));
    }
    return score;
}

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;

    while (numberOfTestCases--) {
        int numberOfNodes;
        cin >> numberOfNodes;
        vector<vector<int>> adjacency(numberOfNodes + 1);
        memo.clear();

        for (int i = 0; i < numberOfNodes - 1; i++) {
            int nodeA, nodeB;
            cin >> nodeA >> nodeB;
            memo[{nodeA, nodeB}] = i;
            memo[{nodeB, nodeA}] = i;
            adjacency[nodeA].push_back(nodeB);
            adjacency[nodeB].push_back(nodeA);
        }

        int maxScore = INT_MIN;

        for (int i = 0; i < adjacency[1].size(); i++) {
            maxScore = max(maxScore, calculateScore(adjacency, 1, adjacency[1][i]));
        }

        cout << maxScore + 1 << endl;
    }

    return 0;
}
