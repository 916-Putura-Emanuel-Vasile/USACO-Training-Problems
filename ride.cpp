//
// Created by Emanuel on 17.07.2021.
//

/*
ID: Emanuel
TASK: ride
LANG: C++14
*/

#include <iostream>
#include <fstream>
#include <string>

std::string comet, group;

bool check() {
    int p1 = 1, p2 = 1;

    for (const auto& l : comet) {
        p1 *= (l - 'A' + 1);
    }

    for (const auto& l : group) {
        p2 *= (l - 'A' + 1);
    }

    return p1 % 47 == p2 % 47;
}

int main() {
    std::ifstream fin("../ride.in");
    std::ofstream fout("../ride.out");

    fin >> comet >> group;
    if (check())
        fout << "GO\n";
    else fout << "STAY\n";

    fin.close();
    fout.close();

    return 0;
}