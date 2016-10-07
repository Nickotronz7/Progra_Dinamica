/**
 * Enunciado:
 * https://community.topcoder.com/stat?c=problem_statement&pm=2402&rd=5009
 *
 * Recuperado de:
 * https://github.com/LemonPi/Problems/blob/master/DP/max_donations.cpp
 */

#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

#define DEBUG
#ifdef DEBUG
#define PRINTLN(x) \
    { cout << x << endl; }
#define RUN(x) \
    { x }
#else
#define PRINTLN(x) \
    {}
#define RUN(X) \
    {}
#endif

template <typename Seq>
void print(Seq& seq) {
#ifdef DEBUG
    for (auto& e : seq) cout << e << ' ';
    cout << endl;
#endif
}

// donations aranged in circles where neighbours will not donate
int max_donations(const vector<int>& donations) {
    int N = donations.size();
    if (N < 3) {
        return max(donations[0], donations[1]);
    }
    vector<int> solution(N + 1, 0);
    solution[0] = donations[0];
    solution[1] = donations[1];

    bool firstChosen = false;
    for (int i = 2; i < N + 1; ++i) {
        // either self or not choose self
        int solutionChooseSelf = solution[i - 2] + donations[i % N];
        if (solutionChooseSelf > solution[i - 1]) {
            solution[i] = solutionChooseSelf;
            if (i == 2) {
                firstChosen = true;
            }
        } else {
            solution[i] = solution[i - 1];
        }
    }

    if (firstChosen) {
        solution[N] -= donations[0];
    }

    //print(solution);
    return solution.back();

}