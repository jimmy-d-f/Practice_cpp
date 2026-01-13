#include <iostream>
using namespace std;

class Destroyer
{
public:
    Destroyer() 
    {
        cout << "Constructor called." << endl;
    }

    ~Destroyer() 
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Destroyer d;
    return 0;
}

