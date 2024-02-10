#include <iostream>
#include <string.h>
using namespace std;
class Book
{
    char title[200], author[100], isbn[50];
    bool availability;

public:
    void get()
    {
        cout << "Enter title, author, isbn and availability :" << endl;
        cout << "And remember to put availablitity as 1 for available and 0 for not available" << endl;
        cin.ignore();
        cin.getline(title, sizeof(title));
        cin.getline(author, sizeof(author));
        cin >> isbn >> availability;
    }
    void put()
    {
        cout << "Title is :" << title << endl;
        cout << "Author is :" << author << endl;
        cout << "ISBN is :" << isbn << endl;
        cout << "Availability is :" << availability << endl;
    }
    void update(char n[])
    {
        if (strcmp(title, n) == 0)
        {
            cout << "Enter new title, author, isbn and availability :";
            cin >> title >> author >> isbn >> availability;
        }
    }
    char *getTitle()
    {
        return title;
    }
    char *getAuthor()
    {
        return author;
    }
    char *getISBN()
    {
        return isbn;
    }
    bool getAvailability()
    {
        return availability;
    }
    void setAvailability(bool a)
    {
        availability = a;
    }
};
class User
{
    char name[20];
    int id;

public:
    void get()
    {
        cout << "Enter name and id :";
        cin >> name >> id;
    }
    void put()
    {
        cout << "Name is :" << name << endl;
        cout << "ID is :" << id << endl;
    }
    char *getName()
    {
        return name;
    }
    int getID()
    {
        return id;
    }
};
class Library
{
    Book b[10];
    User u[10];
    int n, m;

public:
    void get()
    {
        cout << "Enter number of books :";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            b[i].get();
        }
        cout << "Enter number of users :";
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            u[i].get();
        }
    }
    void put()
    {
        for (int i = 0; i < n; i++)
        {
            b[i].put();
        }
        for (int i = 0; i < m; i++)
        {
            u[i].put();
        }
    }
    void addBook()
    {
        b[n].get();
        n++;
    }
    void removeBook(char t[])
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getTitle(), t) == 0)
            {
                for (int j = i; j < n - 1; j++)
                {
                    b[j] = b[j + 1];
                }
                n--;
                break;
            }
        }
    }
    void updateBook(char t[])
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getTitle(), t) == 0)
            {
                b[i].update(t);
                break;
            }
        }
    }
    void searchBook(char t[])
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getTitle(), t) == 0)
            {
                b[i].put();
                break;
            }
        }
    }
    void searchBookByAuthor(char a[])
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getAuthor(), a) == 0)
            {
                b[i].put();
            }
        }
    }
    void searchBookByISBN(char i[])
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(b[j].getISBN(), i) == 0)
            {
                b[j].put();
            }
        }
    }
    void checkOutBook(char t[], int id)
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getTitle(), t) == 0)
            {
                b[i].setAvailability(false);
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (u[i].getID() == id)
            {
                cout << "Book checked out to :" << u[i].getName() << endl;
                break;
            }
        }
    }
    void checkInBook(char t[], int id)
    {
        for (int i = 0; i < n; i++)
        {
            if (strcmp(b[i].getTitle(), t) == 0)
            {
                b[i].setAvailability(true);
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (u[i].getID() == id)
            {
                cout << "Book checked in by :" << u[i].getName() << endl;
                break;
            }
        }
    }
    void displayAvailableBooks()
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i].getAvailability() == true)
            {
                b[i].put();
            }
        }
    }

    void displayOverdueBooks()
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i].getAvailability() == false)
            {
                b[i].put();
            }
        }
    }
};

int main()
{
    Library l;
    l.get();
    int choice;
    char title[20], author[20], isbn[20];
    int id;
    do
    {
        cout << "Enter 1 to add book, 2 to remove book, 3 to update book, 4 to search book, 5 to search book by author, 6 to search book by isbn, 7 to check out book, 8 to check in book, 9 to display available books, 10 to display overdue books and 0 to exit :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            l.addBook();
            break;
        case 2:
            cout << "Enter title to remove :";
            cin >> title;
            l.removeBook(title);
            break;
        case 3:
            cout << "Enter title to update :";
            cin >> title;
            l.updateBook(title);
            break;
        case 4:
            cout << "Enter title to search :";
            cin >> title;
            l.searchBook(title);
            break;
        case 5:
            cout << "Enter author to search :";
            cin >> author;
            l.searchBookByAuthor(author);
            break;
        case 6:
            cout << "Enter isbn to search :";
            cin >> isbn;
            l.searchBookByISBN(isbn);
            break;
        case 7:
            cout << "Enter title and id to check out :";
            cin >> title >> id;
            l.checkOutBook(title, id);
            break;
        case 8:
            cout << "Enter title and id to check in :";
            cin >> title >> id;
            l.checkInBook(title, id);
            break;
        case 9:
            l.displayAvailableBooks();
            break;
        case 10:
            l.displayOverdueBooks();
            break;
        }
    } while (choice != 0);
    return 0;
}