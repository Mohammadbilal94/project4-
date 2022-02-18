#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Items
{
public:
        string name;
        double price;
        int quantity;
        Items(string name, double price, int quantity)
        {
                this->name = name;
                this->price = price;
                this->quantity = quantity;
        }

};
vector<Items> v;
class Store
{
public:
        void addItem(Items i)
        {
                v.push_back(i);
        }
        void printItems()
        {
                for (int i = 0; i < v.size(); i++)
                {
                        Items curr = v[i];
                        cout << curr.name << " x " << curr.quantity << endl;
                        //cout << endl;
                }
        }
};

int32_t main()
{
        Items i1("Iphone", 120, 12);
        Items i2("Colored Iphone", 35, 15);
        Items i3("Headphones", 5, 20);
        Items i4("Playstation", 10, 50);
        Items i5("Monitor", 25, 3);
        Items i6("Joystick", 15, 7);
        Store s1;
        s1.addItem(i1);
        s1.addItem(i2);
        s1.addItem(i3);
        s1.addItem(i4);
        s1.addItem(i5);
        s1.addItem(i6);
        s1.printItems();
        return 0;
}