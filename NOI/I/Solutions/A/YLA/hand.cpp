#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main () {
    string worker_num_str = "";
    getline(cin, worker_num_str);
    int worker_num = atoi(worker_num_str.c_str());
    string str = "";
    getline(cin, str);
    string buf;
    stringstream ss(str);

    vector<int> tokens;

    while (ss >> buf) {
        int token = atoi(buf.c_str());
        tokens.push_back(token);
    }

    int min_friends = 0;
    int max_friends = 0;
    int friends_array[worker_num];
    for (int i = 0; i < tokens.size();i++){
        if (tokens[i] > 0 && i > 0) {
            for (int j = 0; j < tokens[i]; j++) {
                friends_array[i]++;
            }
        }
    }

    for (int i = 0; i < worker_num;i++) {
        cout << friends_array[i] << endl;
    }

    return 0;
}
