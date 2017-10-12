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
        cin.ignore();
        cout << endl;
    }
    double getPrice()
    {
        return housePrice;
    }
    int getStreetNum()
    {
        return streetNumber;
    }
    string getStreetName()
    {
        return streetName;
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
    cout << "House One:  "<< house[0].getStreetNum()<< " "<< house[0].getStreetName()<<" $"<< house[0].getPrice()
         << "\nHouse Two: "<< house[1].getStreetNum()<< " "<< house[1].getStreetName()<<" $"<< house[1].getPrice()
         << "\nHouse Three: "<< house[2].getStreetNum()<< " "<< house[2].getStreetName()<<" $"<< house[2].getPrice();

    if((house[0].getPrice() <= house[1].getPrice()) && (house[0].getPrice() <= house[2].getPrice()))
    {
        if(house[0].getPrice() == house[1].getPrice())
        {
            flagHouseTwo = 2;
        }
        if(house[0].getPrice() == house[2].getPrice())
        {
            flagHouseThree = 3 ;
        }
        flagHouseOne = 1;
    }
    else if((house[1].getPrice() <= house[0].getPrice()) && (house[1].getPrice() <= house[2].getPrice()))
    {
        if(house[1].getPrice() == house[0].getPrice())
        {
            flagHouseOne = 1;
        }
        if(house[1].getPrice() == house[2].getPrice())
        {
            flagHouseThree = 3;
        }
        flagHouseTwo = 2;
    }
    else if((house[2].getPrice() <= house[0].getPrice()) && (house[2].getPrice() <= house[1].getPrice()))
    {
        if(house[2].getPrice() == house[0].getPrice())
        {
            flagHouseOne = 1;
        }
        if(house[2].getPrice() > house[1].getPrice())
        {
            flagHouseTwo = 2;
        }
        flagHouseThree = 3;
    }
    cout << "\nYou should buy: ";
    if(flagHouseOne != 0)
        cout << "House One" << endl;
    if(flagHouseTwo != 0)
        cout << "House Two" << endl;
    if(flagHouseThree != 0)
        cout << "House Three" << endl;
}