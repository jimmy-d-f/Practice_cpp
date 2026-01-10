#include <iostream>
using namespace std;

struct Entity {
    int x, y;

    void print() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    Entity e1; 
    e1.x = 5;
    e1.y = 10;
    e1.print();

    Entity e2{20, 30};
    e2.print();
    return 0;
}