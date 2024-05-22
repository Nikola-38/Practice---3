#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void func(vector<string>& products,  string searchProduct){

     // Находим позицию товара в списке
    auto it = find(products.begin(), products.end(), searchProduct);
    if (it != products.end()) {
        int position = it - products.begin() + 1; // +1 т.к. индексация начинается с 1
        cout << "Товар " << searchProduct << " найден на позиции " << position << endl;
    } else {
        cout << "Товар " << searchProduct << " не найден в списке" << endl;
    }
}

int main() {
    system("chcp 65001"); // для корректного вывода на русском языке

    int n; // количество товаров
    cout << "Введите количество товаров: ";
    cin >> n;

    // Создаем вектор для хранения списка товаров
    vector<string> products(n);
    cout << "Введите список товаров:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> products[i];
    }

    // Запрашиваем у пользователя товар для поиска
    string searchProduct;
    cout << "Введите товар для поиска: ";
    cin >> searchProduct;
    func(products, searchProduct);

    return 0;
}
