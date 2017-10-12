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
        cout << "Enter the street number: ";
        cin >> streetNumber;
        cout << "Enter the street name: ";
        cin >> streetName;
        cout << "Enter the house price: ";
        cin >> housePrice;
        cout << endl;
    }
    double getPrice()
    {
        return housePrice;
    }
};
 int ComparePrice (HouseInfo house[]);
int main() {
    HouseInfo house[3];
    house[0].update(1);
    house[1].update(2);
    house[2].update(3);
    ComparePrice(house);


    }


//Function Definitions
int ComparePrice(HouseInfo house[])
{
    int flagHouseOne = 0, flagHouseTwo = 0, flagHouseThree = 0;
    cout << "House One: $ " << house[0].getPrice() << " House Two: $ "
         << house[1].getPrice() << " House Three: $ " << house[2].getPrice() <<endl;
    if((house[0].getPrice() <= house[1].getPrice()) && (house[0].getPrice() <= house[2].getPrice()))
    {
        cout << "Here are the results " << endl;
        if(house[1].getPrice() > house[2].getPrice())
        {
            flagHouseThree = 1;
        }
        if(house[1].getPrice() < house[2].getPrice())
        {
            flagHouseTwo = 1 ;
        }
        cout << "One: " << flagHouseOne<< endl;
        cout << "Two: " << flagHouseTwo<< endl;
        cout << "Three: " << flagHouseThree<< endl;
    }
    else if((house[1].getPrice() <= house[0].getPrice()) && (house[1].getPrice() <= house[2].getPrice()))
    {
        cout << "Here are the results :" << endl;
        if(house[0].getPrice() > house[2].getPrice())
        {
            flagHouseThree = 1;
        }
        if(house[0].getPrice() < house[2].getPrice())
        {
            flagHouseOne = 1;
        }
        cout << "One: " << flagHouseOne<< endl;
        cout << "Two: " << flagHouseTwo<< endl;
        cout << "Three: " << flagHouseThree<< endl;
    }
    else if((house[2].getPrice() <= house[0].getPrice()) && (house[2].getPrice() <= house[1].getPrice()))
    {
        cout << "Here" << endl;
        if(house[1].getPrice() > house[0].getPrice())
        {
            flagHouseOne = 1;
        }
        if(house[0].getPrice() > house[1].getPrice())
        {
            flagHouseTwo = 2;
        }
        flagHouseOne = 3;
        cout << "One: " << flagHouseOne<< endl;
        cout << "Two: " << flagHouseTwo<< endl;
        cout << "Three: " << flagHouseThree<< endl;
    }
    cout << "You should buy: ";
    if(flagHouseOne != 0)
        cout << "House One" << endl;
    if(flagHouseTwo != 0)
        cout << "House Two" << endl;
    if(flagHouseThree != 0)
        cout << "House Three" << endl;
}
