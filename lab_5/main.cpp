#ifndef SNEAKERS_H
#define SNEAKERS_H
#include <iostream>
#include "string.h"
using namespace std;

class Sneakers
{
private:
    string brand;
    int size;
    string color;
    int quantity;
    string material;
    int numberOfSales;
    string model;
    int price;
public:
    friend class SportsShoesShop;
    Sneakers();
    ~Sneakers();
    void getSneaker();
    void giveSneaker();
};

Sneakers::Sneakers()
{
}

Sneakers::~Sneakers()
{
}
void Sneakers::getSneaker()
{
    cout << "Enter brand:" << endl;
    cin >> brand;
    cout << "Enter model:" << endl;
    cin >> model;
    cout << "Enter color:" << endl;
    cin >> color;
    cout << "Enter quantity:" << endl;
    cin >> quantity;
    cout << "Enter material:" << endl;
    cin >> material;
    cout << "Enter size:" << endl;
    cin >> size;
    cout << "Enter price:" << endl;
    cin >> price;
    cout << "Enter number of sales:" << endl;
    cin >> numberOfSales;

}

void Sneakers::giveSneaker()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Colour: " << color << endl;
    cout << "Material: " << material << endl;
    cout << "Size: " << size << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Number of sales: " << numberOfSales << endl;
}
#endif
class SportsShoesShop
{
    friend class Sneakers;
private:
    Sneakers array[2];
public:
    void sortByPrice(int n);
    void sortByQuantity(int n);
    void sortByNumberofsales(int n);
    void bubbleSortPrices(int n);
    void bubbleSortQuantity(int n);
    void bubbleSortNumberofsales(int n);
    void SneakersRegistration();
};


void SportsShoesShop::bubbleSortPrices(int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j].price > array[j + 1].price) {
                float temp = array[j].price;
                array[j].price = array[j + 1].price;
                array[j + 1].price = temp;
            }
}

void SportsShoesShop::bubbleSortQuantity(int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j].quantity > array[j + 1].quantity) {
                float temp = array[j].quantity;
                array[j].quantity = array[j + 1].quantity;
                array[j + 1].quantity = temp;
            }
}

void SportsShoesShop::bubbleSortNumberofsales(int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (array[j].numberOfSales > array[j + 1].numberOfSales) {
                float temp = array[j].numberOfSales;
                array[j].numberOfSales = array[j + 1].numberOfSales;
                array[j + 1].numberOfSales = temp;
            }
}

void SportsShoesShop::SneakersRegistration()
{

    array[0].getSneaker();
    array[1].getSneaker();
    cout << endl;
    array[1].giveSneaker();
}

void SportsShoesShop::sortByPrice(int n)
{
    int i;
    bubbleSortPrices(n);
    for (i = 0; i < n; i++)
        cout << array[i].price << "\n";
}
void SportsShoesShop::sortByQuantity(int n)
{
    int i;
    bubbleSortQuantity(n);
    for (i = 0; i < n; i++)
        cout << array[i].quantity << "\n";
}
void SportsShoesShop::sortByNumberofsales(int n)
{
    int i;
    bubbleSortNumberofsales(n);
    for (i = 0; i < n; i++)
        cout << array[i].numberOfSales << "\n";
}

int main() {
    SportsShoesShop list;
    list.SneakersRegistration();
    list.sortByPrice(2);
    list.sortByQuantity(2);
    list.sortByNumberofsales(2);

}
