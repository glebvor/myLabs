#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>
#include "matrix.h"

using namespace std;

int main(){
    // ������⢮ ᮢ�������
    // string s = "���";
    // int n = 0, i = 0;
    // char ch;
    // bool f = false, ff = false;
    // vector<string> vec;

    // ifstream in1("test1.txt");
    // if(in1.is_open()){
    //     while(in1.get(ch)){
    //         if(ff == true){
    //             if(ch == ' ' || ch == '\n'){
    //                 ff = false;
    //             }
    //             continue;
    //         }
    //         if(f == true){
    //             if(ch != ' ' && ch != '\n'){
    //                 n--;
    //                 ff = true;
    //             }
    //             f = false;
    //             continue;
    //         }
    //         if(ch != s[i]){
    //             i = 0;
    //             ff = true;
    //             continue;
    //         }
    //         else{
    //             i++;
    //         }
    //         if(i == s.length()){
    //             n++;
    //             f = true;
    //             i = 0;
    //         }
    //     }
    // }
    // in1.close();

    // cout << n;

    // ������ Matrix
    // srand(time(NULL));

    // Matrix<int> m1(2, 2);
    // m1.fill();
    // Matrix<int> m2(3, 3);
    // m2.fill();

    // ofstream out("matr.txt");
    // if(out.is_open()){
    //     out << m1 << m2;
    // }
    // out.close();

    // ifstream in2("matr.txt");
    // if(in2.is_open()){
        
    // }
    // in2.close();

    // ��⠫�� ����
    // int inp = -1, c;
    // string id, pages, author, title, trash;
    // string id_t, pages_t, author_t, title_t;
    // vector<string> vec_i, vec_a, vec_t, vec_p;

    // fstream in2("book.txt");
    // if(in2.is_open()){
    //     getline(in2, trash);
    //     while(!in2.eof()){
    //         in2 >> id >> author >> title >> pages;
    //         vec_i.push_back(id);
    //         vec_a.push_back(author);
    //         vec_t.push_back(title);
    //         vec_p.push_back(pages);
    //     }

    //     while(inp != 0){
    //         cout << "1 - �������� ������" << endl;
    //         cout << "2 - ��ᬮ���� �� �����" << endl;
    //         cout << "3 - 㤠���� ������" << endl;
    //         cout << "4 - ���� �����" << endl;
    //         cout << "5 - ।���஢���� �����" << endl;
    //         cin >> inp;

    //         switch(inp)
    //         {
    //         case 1:
    //             cout << "������ Author Title Pages" << endl;
    //             cin >> author_t >> title_t >> pages_t;
    //             vec_i.push_back(string(4 - to_string(vec_i.size() + 1).length(), '0') + to_string(vec_i.size() + 1));
    //             vec_a.push_back(author_t);
    //             vec_t.push_back(title_t);
    //             vec_p.push_back(pages_t);
    //             break;

    //         case 2:
    //             for(int i = 0; i < vec_i.size(); ++i){
    //                 cout << vec_i[i] << " " << vec_a[i] << " " << vec_t[i] << " " << vec_p[i] << endl;
    //             }
    //             break;

    //         case 3:
    //             cout << "������ Author Title" << endl;
    //             cin >> author_t >> title_t;
    //             c = -1;
    //             for(auto it1 = vec_a.begin(), it2 = vec_t.begin(), it3 = vec_i.begin(), it4 = vec_p.begin(); it1 != vec_a.end(); ++it1, ++it2, ++it3, ++it4){
    //                 c++;
    //                 if(*it1 == author_t && *it2 == title_t){
    //                     vec_i.erase(it3);
    //                     vec_a.erase(it1);
    //                     vec_t.erase(it2);
    //                     vec_p.erase(it4);

    //                     for(int i = c; i < vec_i.size(); ++i){
    //                         vec_i[i] = (string(4 - to_string(stoi(vec_i[i]) - 1).length(), '0') + to_string(stoi(vec_i[i]) - 1));
    //                     }
    //                     break;
    //                 }
    //             }
    //             break;

    //         case 4:
    //             cout << "������ Author Title" << endl;
    //             cin >> author_t >> title_t;
    //             for(int i = 0; i < vec_i.size(); ++i){
    //                 if(vec_a[i] == author_t && vec_t[i] == title_t){
    //                     cout << vec_i[i] << endl;
    //                     break;
    //                 }
    //             }
    //             break;

    //         case 5:
    //             cout << "������ Author Title" << endl;
    //             cin >> author_t >> title_t;
    //             for(int i = 0; i < vec_i.size(); ++i){
    //                 if(vec_a[i] == author_t && vec_t[i] == title_t){
    //                     cout << "������ Author Title Pages" << endl;
    //                     cin >> author_t >> title_t >> pages_t;
    //                     vec_a[i] = author_t;
    //                     vec_t[i] = title_t;
    //                     vec_p[i] = pages_t;
    //                     break;
    //                 }
    //             }
    //             break;

    //         default:
    //             break;
    //         }
    //     }
    // }
    // in2.close();

    return 0;
}