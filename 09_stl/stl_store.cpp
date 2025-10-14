#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistroy;

    orderHistroy.push_back({1, 101, 1, "C001", time(0)});
    orderHistroy.push_back({2, 102, 2, "C002", time(0)});
    orderHistroy.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;

    for(const auto &product: products){
        categories.insert(product.category);
    }

    


    return 0;
}