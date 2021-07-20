//
// Created by Emanuel on 20.07.2021.
//

/*
ID: your_id_here
TASK: milk2
LANG: C++14
*/

#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

void read(std::vector<std::pair<int, int>>& margins, int& n);
std::pair<int, int> solve(std::vector<std::pair<int, int>>& margins);
void write(int milking, int idle);

int main() {
    std::vector<std::pair<int, int>> margins;  // 0 margin means start of interval, 1 means end of interval

    int n;
    read(margins, n);
    auto result = solve(margins);
    write(result.first, result.second);

    return 0;
}

void read(std::vector<std::pair<int, int>>& margins, int& n) {
    std::ifstream fin("milk2.in");

    int a, b;
    fin >> n;

    for (int i = 0; i < n; ++i) {
        fin >> a >> b;
        margins.push_back({a, 0});
        margins.push_back({b, 1});
    }

    fin.close();
}

std::pair<int, int> solve(std::vector<std::pair<int, int>>& margins) {
    std::sort(margins.begin(), margins.end(), [](const auto& el1, const auto& el2){
        return el1.first < el2.first;
    });

    int cnt_start = 1, cnt_end = 0, start = margins[0].first, milking = 0, idle = 0;
    for (int i = 1; i < margins.size(); ++i) {
        if (margins[i].second) cnt_end++;
        else cnt_start++;

        if (cnt_start >= cnt_end) {
            if (milking < margins[i].first - start && margins[i].second)
                milking = margins[i].first - start;
        }
        if (cnt_start == cnt_end && i != margins.size() - 1 && margins[i].first != margins[i + 1].first) {
            start = margins[i + 1].first;
            cnt_start = 0;
            cnt_end = 0;

            if (start - margins[i].first > idle)
                idle = start - margins[i].first;
        }
    }

    return {milking, idle};
}

void write(int milking, int idle) {
    std::ofstream fout("milk2.out");
    fout << milking << ' ' << idle << '\n';
    fout.close();
}
