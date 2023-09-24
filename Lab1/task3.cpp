#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Шаблон
template <typename T>
T sum_all(vector<T> a){
    T sum;
    bool flag = false;
    for(T i : a){
        sum = flag ? sum + i : i, flag = true;
    }
    return sum;
}

int main()
{
    // Входные данные
    vector<int> v1{1, 2, 3};
    vector<double> v2{1, 2, 3};
    vector<string> v3{"a", "bc", "def"};
    vector<char> v4{'a', 'b', 'c'};

    // Вывод
    cout << sum_all(v1) << '\n';
    cout << sum_all(v2) << '\n';
    cout << sum_all(v3) << '\n';
    cout << sum_all(v4) << '\n';

    return 0;
}
