//
// Created by Emanuel on 19.07.2021.
//

/*
ID: Emanuel
TASK: beads
LANG: C++14
*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream fin("beads.in");

    int n, read = 1;
    fin >> n;

    int max = 0, cnt_last_w = 0;
    int left = 0, right = 0;

    char c;
    char last_non_w;
    fin >> c;
    if (c != 'w')
        last_non_w = c;

    bool stop = false;
    while (c == 'w') {
        fin >> c;
        read++;
        cnt_last_w++;
        if (read > n) {
            stop = true;
            break;
        }
    }

    if (stop) {
        std::ofstream fout("beads.out");
        fout << read - 1 << '\n';
        fout.close();
        return 0;
    }

    if (c != 'w') {
        last_non_w = c;
        cnt_last_w = 0;
    }

    char first_c = last_non_w;
    left = read;

    char last = c;

    while (last == c || last == 'w') {
        fin >> last;
        left++;
        read++;
        if (read > n) {
            stop = true;
            break;
        }

        if (last != 'w') {
            last_non_w = last;
            cnt_last_w = 0;
        }
        else cnt_last_w++;
    }

    if (stop) {
        std::ofstream fout("beads.out");
        fout << read - 1 << '\n';
        fout.close();
        return 0;
    }

    left--;
    int first_len = left;
    int rem = 0;

    right = 1;
    max = read;

//    std::cout << left << ' ' << right << '\n';

    for (int i = read; i < n; ++i) {
        fin >> c;

        if (c == 'w') rem++;
        if (last == c || c == 'w') {
            right++;
            if (last == c) rem = 0;
        }
        else {
//            std::cout << right << ' ' << rem << ' ' << i << '\n';
            left = right;
            left -= rem;
            right = 1 + rem;
            rem = 0;
        }

//        std::cout << rem << ' ' << i << '\n';

        if (left + right > max) {
//            std::cout << left << ' ' << right << ' ' << last << ' ' << rem << ' ' << max << ' ';
//            std::cout << "Update: " << i << '\n';
            max = left + right;
        }
        if (c != 'w')
            last = c;

        if (c == 'w')
            cnt_last_w++;
        else {
            cnt_last_w = 0;
            last_non_w = c;
        }
    }

    if (last == first_c) {
        int last_r = right + first_len;
        if (last_r + left > max) {
            max = last_r + left;
//            std::cout << "Update: final1\n";
//            std::cout << first_len << ' ' << last_r << ' ' << left << '\n';
        }
    }
    else if (right + first_len > max) {
        max = right + first_len;
//        std::cout << "Update: final2\n";
    }

    fin.close();

    std::ofstream fout("beads.out");
    fout << max << '\n';
    fout.close();

    return 0;
}
