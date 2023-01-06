#include <iostream>
#include <string.h>
#include "product.h"

using namespace std;

void Product::set(string name, int price)
{
    Product::_c_name = name;
    Product::_i_price = price;
}

string Product::getName()
{
    return Product::_c_name;
}

int Product::getPrice()
{
    return Product::_i_price;
}