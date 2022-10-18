#include <iostream>

using namespace std;
 int main() {

    int y{100};

    //se esta declarando la referencia a entero yRef
    //yRef se hace referencia a y
    int& yRef{y};

    //se esta declarando el puntero a entero yPtr
    int* yPtr{nullptr};

    yPtr = &y;

    //imprime direccion de memoria
    cout<<yPtr<< endl;
    cout<<&y<<endl;

    cout<<*yPtr<< endl;
    *yPtr = 1000;
    cout<< y << endl;
return 0;
 }