#include "Life.h"
#include <iostream>

using namespace std;

int main()
{
    int x_in, y_in;
    cout << "Size (XxY):";
    cin >> x_in;
    cin >> y_in;
    Life game(x_in, y_in);
    game.runLife();
    return 0;
}