#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void func5(vector<int>& array_int, vector<int>& unique_elements, vector<int>& counts, int cnt) {
    
    cout << "Уникальные элементы и их количество: ";
    for (size_t i = 0; i < unique_elements.size(); ++i) {
        cout << unique_elements[i] << " = " << counts[i] << " раз(а)" << ";   ";
        cnt += counts[i];
    }
    cout << "Массив заполнен " << cnt << " числами" << endl;

    // Вывод массива уникальных элементов
    cout << "Уникальные элементы: ";
    for (int i = 0; i < unique_elements.size(); i++) {
        cout << unique_elements[i] << " ";
    }
    cout << endl;
}

int main() {
    system("chcp 65001");
    int n = 10;
    int n1 = 30;
    int cnt = 0;
    system("chcp 65001"); 

    vector<int> array_int(n1);
    for (int i = 0; i < n1; ++i) {
        array_int[i] = rand() % 41-20; // Заполнение массива случайными целыми числами от -20 до 20
    }

    vector<int> unique_elements;
    vector<int> counts;

    sort(array_int.begin(), array_int.end());

    for (int num : array_int) {
        if (unique_elements.empty() || num != unique_elements.back()) {
            unique_elements.push_back(num);
            counts.push_back(1);
        } else {
            counts.back()++;
        }
    }

    func5(array_int, unique_elements, counts, cnt);

    return 0;
}
