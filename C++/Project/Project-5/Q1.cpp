#include <iostream>
using namespace std;

class LibraryItem {
protected:
    string title;
    string author;
    string dueDate;

public:
    
    void setTitle(string t){title=t;}
    void setAuthor(string a){author=a;}
    void setDueDate(string d){dueDate=d;}

    string getTitle(){return title;}
    string getAuthor(){return author;}
    string getDueDate(){return dueDate;}

 
    virtual void checkOut()=0;
    virtual void returnItem()=0;
    virtual void displayDetails()=0;

    virtual ~LibraryItem(){}
};

class Book : public LibraryItem {
    string ISBN;

public:
    Book(string t, string a, string d, string i) {
        setTitle(t);
        setAuthor(a);
        setDueDate(d);
        ISBN = i;
    }

    void checkOut() override {
        cout << "Book '" << title << "' has been checked out." << endl;
    }

    void returnItem() override {
        cout << "Book '" << title << "' has been returned." << endl;
    }

    void displayDetails() override {
        cout << "Title: " << getTitle() << "\nAuthor: " << getAuthor()
             << "\nDue Date: " << getDueDate() << "\nISBN: " << ISBN << endl;
    }
};


main(){
    const int MAX_ITEMS = 10;
    LibraryItem* items[MAX_ITEMS];
    int count = 0;

    int choice;
    do {
        cout << "\n=== Library Menu ===\n";
        cout << "1. Add Book\n2. Display All\n3. Check Out\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                if (count >= MAX_ITEMS) throw "Library is full!";

                string t, a, d, i;
                cout << "Enter title: ";
                cin.ignore(); getline(cin, t);
                cout << "Enter author: ";
                getline(cin, a);
                cout << "Enter due date: ";
                getline(cin, d);
                cout << "Enter ISBN: ";
                getline(cin, i);

                if (i.length() < 4) throw "Invalid ISBN format!";

                items[count++] = new Book(t, a, d, i);
                cout << "Book added successfully.\n";
            }
            else if (choice == 2) {
                for (int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << " Details:\n";
                    items[i]->displayDetails();
                }
            }
            else if (choice == 3) {
                int idx;
                cout << "Enter book number to check out (1 to " << count << "): ";
                cin >> idx;
                if (idx < 1 || idx > count) throw "Invalid book number!";
                items[idx - 1]->checkOut();
            }
            else if (choice == 4) {
                int idx;
                cout << "Enter book number to return (1 to " << count << "): ";
                cin >> idx;
                if (idx < 1 || idx > count) throw "Invalid book number!";
                items[idx - 1]->returnItem();
            }
            else if (choice == 5) {
                cout << "Exiting...\n";
            }
            else {
                throw "Invalid menu choice!";
            }
        } catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }

    } while (choice != 5);

 
    for (int i = 0; i < count; i++) {
        delete items[i];
    }

}

