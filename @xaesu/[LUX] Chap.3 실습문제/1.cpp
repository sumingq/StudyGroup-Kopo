#include "1.h"

int main() {
    Tower myTower;
    Tower seoulTower(100);

    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}