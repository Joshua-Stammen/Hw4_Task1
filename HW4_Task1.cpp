#include <iostream>
using namespace std;
class HouseInfo
{
private:
    int streetNumber;
    double housePrice;
    string streetName;
public:
    void update()
    {
        cout << "\nEnter the street number: ";
        cin >> streetNumber;
        cout << "\nEnter the house price: ";
        cin >> housePrice;
        cout << "\nEnter the street name: ";
        cin >> streetName;
    }
};

int main() {

    return 0;
}
//Function Definitions
