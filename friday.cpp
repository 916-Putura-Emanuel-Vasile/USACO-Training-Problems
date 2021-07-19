//
// Created by Emanuel on 17.07.2021.
//

/*
ID: Emanuel
TASK: friday
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <vector>

int years;

void read();
void write(const std::vector<int>& f);
void solve();
bool isLeap(int year);

int main() {
    read();
    solve();

    return 0;
}

void read() {
    std::ifstream fin("friday.in");
    fin >> years;
    fin.close();
}

void write(const std::vector<int>& f) {
    std::ofstream fout("friday.out");

    fout << f[5] << ' ' << f[6] << ' ';
    for (int i = 0; i < 4; ++i)
        fout << f[i] << ' ';
    fout << f[4] << '\n';

    fout.close();
}

void solve() {
    std::vector<int> f (7, 0);
    std::vector<int> days {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month_start = 0;
    for (int start = 1900; start <= 1900 + years - 1; ++start) {
        if (isLeap(start)) days[1] = 29;
        else days[1] = 28;

        for (int month = 1; month <= 12; ++month) {
            if (start != 1900 || month != 1) {
                int req = month - 2;
                if (req < 0) req = 11;
                month_start = (month_start + days[req]) % 7;
            }
            int day = (month_start + 12) % 7;
            f[day]++;
        }
    }

    write(f);
}

bool isLeap(int year) {
    if (year % 100 == 0 && year % 400 != 0) return false;
    if (year % 4 == 0) return true;
    return false;
}