#include <iostream>
#include <string.h>
using namespace std;
class Product
{
    char name[20];
    float price;
    int quantity;

public:
    void get()
    {
        cout << "Enter name, price and quantity :";
        cin >> name >> price >> quantity;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Price is :" << price << endl;
        cout << "Quantity is :" << quantity << endl;
    }
    void update(char n[])
    {
        if (strcmp(name, n) == 0)
        {
            cout << "Enter new name, price and quantity :";
            cin >> name >> price >> quantity;
        }
    }
    char *getName()
    {
        return name;
    }
    float getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
};
class Cart
{
    Product p[10];
    int n;

public:
    void get()
    {
        cout << "Enter number of products :";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            p[i].get();
        }
    }
    void put()
    {
        for (int i = 0; i < n; i++)
        {
            p[i].put();
        }
    }
    void update(char n[])
    {
        for (int i = 0; i <= *n; i++)
        {
            p[i].update(n);
        }
    }
    void add(Product pr)
    {
        p[n] = pr;
        n++;
    }
    void remove(char n[])
    {
        for (int i = 0; i < *n; i++)
        {
            if (strcmp(p[i].getName(), n) == 0)
            {
                for (int j = i; j < *n - 1; j++)
                {
                    p[j] = p[j + 1];
                }
                n--;
                break;
            }
        }
    }
    float getTotal()
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += p[i].getPrice() * p[i].getQuantity();
        }
        return sum;
    }
};
class Shipping
{
    char name[20];
    char address[20];
    char city[20];
    char state[20];
    char country[20];
    int pincode;

public:
    void get()
    {
        cout << "Enter name, address, city, state, country and pincode :";
        cin >> name >> address >> city >> state >> country >> pincode;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "Address is :" << address << endl;
        cout << "City is :" << city << endl;
        cout << "State is :" << state << endl;
        cout << "Country is :" << country << endl;
        cout << "Pincode is :" << pincode << endl;
    }
    void update()
    {
        cout << "Enter new name, address, city, state, country and pincode :";
        cin >> name >> address >> city >> state >> country >> pincode;
    }
    char *getName()
    {
        return name;
    }
    char *getAddress()
    {
        return address;
    }
    char *getCity()
    {
        return city;
    }
    char *getState()
    {
        return state;
    }
    char *getCountry()
    {
        return country;
    }
    int getPincode()
    {
        return pincode;
    }
};
int main()
{
    int n;
    Product p[10];
    Cart c;
    c.get();
    Shipping s;
    s.get();
    int choice;
    char name[20];
    do
    {
        cout << "1. Product in cart" << endl;
        cout << "2. Remove product from cart" << endl;
        cout << "3. Update product in cart" << endl;
        cout << "4. Update Quantity in cart" << endl;
        cout << "5. Enter shipping information" << endl;
        cout << "6. Update shipping information" << endl;
        cout << "7. Display shipping information" << endl;
        cout << "8. Display total cost" << endl;
        cout << "9. Print invoice" << endl;
        cout << "10. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            c.put();
            break;
        case 2:
            cout << "Enter name of product to remove :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(p[i].getName(), name) == 0)
                {
                    c.remove(name);
                }
            }
            break;
        case 3:
            cout << "Enter name of product to update :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(p[i].getName(), name) == 0)
                {
                    c.update(name);
                }
            }
            break;
        case 4:
            cout << "Enter name of product to update quantity :";
            cin >> name;
            for (int i = 0; i < n; i++)
            {
                if (strcmp(p[i].getName(), name) == 0)
                {
                    int q;
                    cout << "Enter new quantity :";
                    cin >> q;
                    p[i].setQuantity(q);
                }
            }
            break;
        case 5:
            s.get();
            break;
        case 6:
            s.update();
            break;
        case 7:
            s.put();
            break;
        case 8:
            cout << "Total cost is :" << c.getTotal() << endl;
            break;
        case 9:
            cout << "Invoice :" << endl;
            c.put();
            s.put();
            cout << "Total cost is :" << c.getTotal() << endl;
            break;
        case 10:
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 10);
    return 0;
}