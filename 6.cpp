#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void func(vector<double>& all_results, vector<double>& results_day1, vector<double>& results_day2){

    all_results.insert(all_results.begin(), results_day1.begin(), results_day1.end());
    all_results.insert(all_results.end(), results_day2.begin(), results_day2.end());
    
    // Сортировка списка результатов по возрастанию
    sort(all_results.begin(), all_results.end());
}


int main() {
    system("chcp 65001");
    
    // Результаты первого дня
    vector<double> results_day1;
    
    cout << "Введите результаты за первый день:\n";
    for (int i = 0; i < 5; i++) { // Предполагаем, что участвовало 5 человек
        double time;
        cout << "Введите время участника " << i+1 << ": ";
        cin >> time;
        results_day1.push_back(time);
    }
    
    // Результаты второго дня
    vector<double> results_day2;
    
    cout << "Введите результаты за второй день:\n";
    for (int i = 0; i < 5; i++) {
        double time;
        cout << "Введите время участника " << i+1 << ": ";
        cin >> time;
        results_day2.push_back(time);
    }
    
    // Объединение результатов двух дней
    vector<double> all_results;
    func(all_results,results_day1, results_day2 );
    
    // Определение победителя
    cout << "Победитель: " << all_results[0] << " секунд" << endl;
    
    return 0;
}
