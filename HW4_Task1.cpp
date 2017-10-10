#include <iostream>
using namespace std;
class HouseInfo
{
private:
    int streetNumber;
    double housePrice;
    string streetName;
public:
    void update(int num)
    {
        cout <<"Enter info for house " << num << endl;
        cout << "\nEnter the street number: ";
        cin >> streetNumber;
        cout << "\nEnter the house price: ";
        cin >> housePrice;
        cout << "\nEnter the street name: ";
        cin >> streetName;
    }
};
 void ComparePrices ();
int main() {
    HouseInfo house[3];
    house[0].update(1);
    house[1].update(2);
    house[2].update(3);


    return 0;
}
//Function Definitions
void ComparePrice()
{

}
