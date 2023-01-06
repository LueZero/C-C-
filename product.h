#include <iostream>
#include <string.h>

using namespace std;

class Product {
public:
    void set(string name, int price);

    string getName();

    int getPrice();
private:
    string _c_name;
    int _i_price;
};