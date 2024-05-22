#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Функция для проверки, является ли число простым
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    system("chcp 65001");
    
    int n;
    cout << "Введите размер вектора: ";
    cin >> n;

    // Заполняем вектор случайными числами
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100 + 1; // Генерируем случайное число от 1 до 100
    }

    // Удаляем составные числа из вектора
    auto it = remove_if(numbers.begin(), numbers.end(), [](int num) {
        return !isPrime(num);
    });
    numbers.erase(it, numbers.end());

    // Выводим новый вектор с простыми числами
    cout << "Простые числа в векторе: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
