//
// Created by Emanuel on 17.07.2021.
//

/*
ID: Emanuel
TASK: gift1
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>


std::map<std::string, int> map;
std::vector<std::string> order;

int np;

std::ifstream fin("gift1.in");
std::ofstream fout("gift1.out");

void solve();

int main() {
    solve();

    return 0;
}

void solve() {
    fin >> np;

    std::string name, receiver;
    for (int i = 0; i < np; ++i) {
        fin >> name;
        map.insert({name, 0});
        order.push_back(name);
    }

    int sum, no;
    for (int i = 0; i < np; ++i) {
        fin >> name >> sum >> no;
        if (!no) continue;
        int given = sum / no;
        map[name] += (-given * no);
        for (int j = 0; j < no; ++j) {
            fin >> receiver;
            map[receiver] += given;
        }
    }

    for (const auto& n : order) {
        fout << n << ' ' << map[n] << '\n';
    }
}
