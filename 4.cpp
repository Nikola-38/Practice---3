#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string& s1, const string& s2) {
    // Проверяем, что длины строк равны
    if (s1.length() != s2.length()) {
        return false;
    }

    // Копируем строки, чтобы не изменять оригиналы
    string copy1 = s1;
    string copy2 = s2;

    // Сортируем строки в алфавитном порядке
    sort(copy1.begin(), copy1.end());
    sort(copy2.begin(), copy2.end());

    return copy1 == copy2;
}

int main() {
    system("chcp 65001");
    string s1, s2;
    cout << "Введите первое слово: ";
    cin >> s1;
    cout << "Введите второе слово: ";
    cin >> s2;

    if (areAnagrams(s1, s2)) {
        cout << "Слова являются анаграммами" << endl;
    } else {
        cout << "Слова не являются анаграммами" << endl;
    }

    return 0;
}
