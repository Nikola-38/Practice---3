#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    system("chcp 65001");
    // Список серверов и их онлайн
    vector<pair<string, int>> servers = {
        {"Server1", 20},
        {"Server2", 35},
        {"Server3", 45},
        {"Server4", 10},
        {"Server5", 30}
    };

    // Найдем сервер с наибольшим онлайном
    auto maxIt = max_element(servers.begin(), servers.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    // Выведем результат
    cout << "На сервере " << (*maxIt).first << " играет " << (*maxIt).second << " человек." << endl;

    return 0;
}
