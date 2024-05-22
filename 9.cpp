#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Функция для нахождения наибольшего общего делителя (НОД) двух чисел
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void func(vector<int>& divisors, int& maxGCD) {
    // Находим наибольший общий делитель (НОД)
    maxGCD = *max_element(divisors.begin(), divisors.end());

    // Находим наименьший общий делитель (НОД)
    auto minGCD = min_element(divisors.begin(), divisors.end());
    if (minGCD == divisors.end()) {
        cout << "Нет делителей, кроме 1 и самого числа" << endl;
    } else {
        cout << "Наименьший общий делитель: " << *minGCD << endl;
    }
}

int main() {
    system("chcp 65001");
    
    int num, maxGCD = 0;
    cout << "Введите число: ";
    cin >> num;

    // Создаем вектор для хранения делителей числа
    vector<int> divisors;

    // Находим делители числа
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    func(divisors, maxGCD);

    // Выводим наибольший общий делитель
    cout << "Наибольший общий делитель: " << maxGCD << endl;

    return 0;
}
