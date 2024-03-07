#include <time.h>
#include "matrix.h"

using namespace std;

int main(){
    srand(time(NULL));

    Matrix a(3, 3);
    Matrix b(3, 3);
    Matrix c(3, 4);
    
    a.fill();
    b.fill();
    c.fill();

    cout << "a" << endl << a << endl;
    cout << "b" << endl << b << endl;
    cout << "c" << endl << c << endl;
    
    cout << "a + b" << endl << a + b << endl;
    cout << "a - b" << endl << a - b << endl;
    cout << "a * c" << endl << a * c << endl;
    
    a += b;
    
    cout << "a += b" << endl << a << endl;
    
    a -= b;
    
    cout << "a -= b" << endl << a << endl;
    
    if(a != b){cout << "a != b" << endl << "Не равны" << endl << endl;}

    a = b;
    cout << "a = b" << endl  << a << endl;
    
    if(a == b){cout << "a == b" << endl << "Равны" << endl;}

    return 0;
}