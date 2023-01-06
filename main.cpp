#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    void set(string name, int price)
    {
        _c_name = name;
        _i_price = price;
    }

    string getName()
    {
        return _c_name;
    }

    int getPrice()
    {
        return _i_price;
    }
private:
    string _c_name;
    int _i_price;
};

int main()
{
    Product product;

    product.set("蘋果", 500);

    printf("This %s is %d yuan", product.getName().c_str(), product.getPrice());

    return 0;
}