#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    system("chcp 65001");

    // Создаем карту для хранения температур и времени
    map<int, vector<int>> tempMap;
    
    // Вводим данные за 3 дня
    for (int day = 1; day <= 3; day++) {
        cout << "День " << day << ":\n";
        for (int hour = 0; hour < 24; hour++) {
            int temp = rand() % 31; // генерируем случайную температуру от 0 до 30
            tempMap[temp].push_back(hour);
            cout << "Температура в " << hour << ":00: " << temp << " градусов\n";
        }
    }
    
    // Находим общие температуры и время
    vector<int> commonTemps;
    for (auto& [temp, hours] : tempMap) {
        if (hours.size() == 3) {
            commonTemps.push_back(temp);
            cout << "Температура " << temp << " градусов была в: ";
            for (int hour : hours) {
                cout << hour << ":00, ";
            }
            cout << "\b\b\n";
        }
    }
    
    if (commonTemps.empty()) {
        cout << "Нет общих температур за 3 дня.\n";
    } else {
        cout << "Общие температуры: ";
        for (int temp : commonTemps) {
            cout << temp << " ";
        }
        cout << endl;
    }
    
    return 0;
}
