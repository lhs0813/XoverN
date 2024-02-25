#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int number = x;
    for (int i = 0; i < n; i++) {
        answer.push_back(x);
        x = x + number;
    }

    return answer;
}

int main(void) {
    vector<long long> ask = solution(1, 2);

    for (long long num : ask) {
        cout << num;
    }


}

