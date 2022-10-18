#include <iostream>

using namespace std;
 int main() {

    int y{100};
    int& yRef{y};
    int* yPtr{nullptr};

    yRef = 200;

    cout<< *yPtr << endl;

return 0;
 }