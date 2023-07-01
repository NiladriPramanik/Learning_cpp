#include <iostream>
using namespace std ;

int main() {
    int i = 3;
    int result;

    result = i++;
    result += ++i;
    result += i--;
    result += --i;

    cout << "Result: " << result <<endl;

    return 0;
}
