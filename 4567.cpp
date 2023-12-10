#include <iostream>
#include <fstream>

struct Product {
    std::string name;
    float price;
};

int main() {
    Product product;
    product.name = "Apple";
    product.price = 1.99;
    std::ofstream outfile("product.txt");
    outfile << "Name: " << product.name << std::endl;
    outfile << "Price: " << product.price << std::endl;
    outfile.close();
    return 0;
}