#include <iostream>
using namespace std;    

class Entity
{
    public:
        Entity() 
        {
            cout << "Entity constructor called." << endl;
        }

        int x, y;

        void print()
        {
            cout << "X: " << x << ", Y: " << y << endl;
        }
};


class Player : public Entity
{
    public: 
        void calcDifference(int x, int y)
        {
            cout << "Difference between x and y: " << x - y << endl;
        }
};

int main()
{
    Player player;
    player.x = 10;
    player.y = 6;
    player.print();
    player.calcDifference(10, 6);
    return 0;
}
