#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;
//Заполнение массивов, пользовательский интерфейс
void SposobZapoln(vector<string> &names, vector<int> &marks){
    int i;
    do {
    cout << "1. Анализ на дефолтном массиве\n2. Анализ на выборке из дефолтного массива\n3. Анализ на вашем массиве\n";
    cin >> i;
    switch(i){
        case 1:
        {
        names = {"Василий", "Валерий", "Генадий", "Михаил", "Владимир", "Святослав", "Юлия", "Мария", "Георгий", "Дмитрий"};
        marks = {1, 2, 4, 8, 16, 32, 64, 32, 64, 100};
        break;
        }
        
        case 2:
        {
        vector<string> AllNames{"Гаафа", "Гаведдай", "Гавриил", "Гаврил", "Гаврила", "Гаврило", "Гаган", "Гаиан", "Гаиания", "Гаий", "Гаия", "Гай", "Гала", "Галактион", "Галасий", "Галата", "Галатея", "Галатиан", "Гали", "Галик", "Галина", "Галла", "Галя", "Гамалиил", "Гарасим", "Гарон", "Гаспар", "Гая", "Гаян", "Гаяна", "Гаяния", "Гвидон", "Гегал", "Гедеон", "Гектор", "Геласий", "Геласия", "Гелиана", "Гелий", "Гелия", "Гемелл", "Гемелла", "Гемин", "Гемина", "Гений", "Гения", "Геннадий", "Геннадия", "Геновефа", "Генриетта", "Генрих", "Георгий", "Георгина", "Гера", "Геракл", "Гераклид", "Герасим", "Гервасий", "Герман", "Германа", "Германик", "Гермес", "Герминий", "Гермоген", "Гермократ", "Герон", "Геронтий", "Герта", "Гертруда", "Гея", "Гиацинт", "Гигант", "Гигантий", "Гилар", "Гиларий", "Глафира", "Глеб", "Глерия", "Гликер", "Гликера", "Гликерий", "Гликерия", "Глориоза", "Глория", "Гоброн", "Голиндуха", "Гонеста", "Гонор", "Гонорат", "Гонората", "Гонорий", "Горазд", "Гораций", "Горгий", "Горгоний", "Горгония", "Гордей", "Гордиан", "Гордий", "Горислав"};
        auto iter = AllNames.cbegin();
        int viborka, randznach;
        
        do {
        cout << "Введите размер выборки, которая не превосходит " << AllNames.size() << '\n';
        cin >> viborka;
        } while(AllNames.size() < viborka);
        
        for(i = 0; i < viborka; ++i){
            randznach = rand()%AllNames.size();
            names.push_back(AllNames[randznach]);
            AllNames.erase(iter + randznach);
            marks.push_back(rand()%101);
        }
        break;
        }
        
        case 3:
        {
        int flag = 0;
        string name;
        int mark;
        while (flag == 0){
            cout << "Введите имя ученика, если вы всё ввели, напишите \"EndEnter\": ";
            cin >> name;
            if (name == "EndEnter"){break;}
            names.push_back(name);
            do {
                cout << "Введите оценку данного ученика (0-100): ";
                cin >> mark;
            } while(mark > 100 or mark < 0);
            marks.push_back(mark);
        }
        break;
        }
        
        default: {break;}
    }
    } while((i != 1) and (i != 2) and (i != 3));
    do {
        cout << "0. Если вы хотите продолжить выполнение программы\n1. Если вы хотите добавить пару имя-значение\n2. Если вы хотите удалить пару имя-значение по имени\n";
        cin >> i;
        switch (i){
            case 1:
            {
                string name;
                int mark;
                cout << "Введите имя ученика: ";
                cin >> name;
                names.push_back(name);
                do {
                    cout << "Введите оценку данного ученика (0-100): ";
                    cin >> mark;
                } while(mark > 100 or mark < 0);
                marks.push_back(mark);
                break;
            }
            case 2:
            {
                for(int j = 0; j < names.size(); ++j){
                    cout << names[j] << ' ' << marks[j] << endl;
                }
                cout << "Введите имя ученика (если не хотите удалять, введите сомвол, который не совпадает с именем): ";
                string name;
                cin >> name;
                auto itern = names.cbegin();
                auto iterm = marks.cbegin();
                for(int j = 0; j < names.size(); ++j){
                    if(names[j] == name){
                        names.erase(itern + j);
                        marks.erase(iterm + j);
                    }
                }
            }
            default: {break;}
        }
    } while(i != 0);
}
//Коктельная сортировка
vector<int> shakerSort(vector<int> masiv) {
	//Создание левой и правой границы
	int control = masiv.size() - 1;
	int left = 0, right = control;
	//Проход вправо
	do {
		for (int i = left; i < right; i++) {
			if (masiv[i] > masiv[i + 1]) {
				std::swap(masiv[i], masiv[i + 1]);
				control = i;
			}
		}
		right = control;
		//Проход влево
		for (int i = right; i > left; i--) {
			if (masiv[i] < masiv[i - 1]) {
				std::swap(masiv[i], masiv[i - 1]);
				control = i;
			}
		}
		left = control;
	} while (left < right);
	return masiv;
}
//Медиана
float median(vector<int> masiv)
{
    masiv = shakerSort(masiv); 
    if (masiv.size() % 2 == 1){return masiv[masiv.size() / 2];}
    else {return 0.5 * (masiv[masiv.size() / 2 - 1] + masiv[masiv.size() / 2]);}
}       
//Среднее значение
float srznach(vector<int> masiv)
{
   float znach = 0;
   for(int i: masiv){
         znach+=i;
     }
   return znach/masiv.size();
}
//Мода
vector<int> moda(vector<int> masiv)
{
    vector<int> Moda{};
    masiv = shakerSort(masiv);
    int count = 0, check = masiv[0], max = 1, maxcheck = 0;
    for(int i : masiv){
        if (i != check)
        {
            if (max == count)
            {
                maxcheck = check;
                Moda.push_back(maxcheck);
            }
            
            if (max < count)
            {
                maxcheck = check;
                Moda.clear();
                Moda.push_back(maxcheck);
                max = count;
            }
            
            check = i;
            count = 0;
        }
        count++;
    }
    return Moda;
}

int main()
{
    srand(time(NULL));
    vector<string> names{};
    vector<int> marks{};
    SposobZapoln(names, marks);
    //Вывод массивов через итератор
    // auto itern{names.cbegin()};
    // auto iterm{marks.cbegin()};
    // for(int j = 0; j < names.size(); ++j){
    //     cout << *(itern + j) << ' ' << *(iterm + j) << " | ";
    // }
    //Range-based for-loop вывод массивов
    //for(string j: names){
    //    cout << j << ' ';
    //}
    // cout << '\n';
    //for(int j: marks){
    //    cout << j << ' ';
    //}
    //Вывод массивов
    for(int j = 0; j < names.size(); ++j){
        cout << names[j] << ' ' << marks[j] << endl;
    }
    cout << "Среднее значение: " << srznach(marks) << endl;
    cout << "Медиана: " << median(marks) << endl;
    vector<int> modaarr = moda(marks);
    cout << "Мода: ";
    for(int i : modaarr){
        cout << i << ' ';
    }
    return 0;
}
