#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string s = "הכה";
    string ss = "";
    int n = 0, c = 0;
    char ch;

    ifstream in("test1.txt");
    if(in.is_open()){
        while(in.get(ch)){
            ss += string(1, ch);
        }
        if(s.length() > ss.length()){exit(1);}
        for(int i = 0; i < ss.length(); ++i){
            for(int j = 0; j < s.length(); ++j){
                if(s[j] == ss[i + j]){c++;}
                else{c = 0; break;}
                if(c == s.length()){n++; c = 0;}
            }
        }
    }
    in.close();

    cout << n;

    return 0;
}