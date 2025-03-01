/*name : Alex Abere
 ADM : BSCIT-05-0063/2024
 Version1
 1/03/2025
 library system management system*/



#include <iostream>

using namespace std;

// Base Class: Person
class Person {
protected:
    string name; // Protected data member for name

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() const {
        return name;
    }
};

// Derived Class: LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor to initialize name, memberID, and booksBorrowed
    LibraryMember(string n, int id, int books) {
        setName(n);
        memberID = id;
        booksBorrowed = books;
    }

    // Function to get the member ID
    int getMemberID() const {
        return memberID;
    }

    // Function to get the number of books borrowed
    int getBooksBorrowed() const {
        return booksBorrowed;
    }
};

// Derived Class: PremiumMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    // Constructor to initialize name, memberID, booksBorrowed, and membershipFee
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    // Function to get the membership fee for the premium member
    double getMembershipFee() const {
        return membershipFee;
    }
};

// Main function
int main() {
    // Create a regular library member
    LibraryMember member1("Alex", 20, 4);

    // Create a premium library member
    PremiumMember premiumMember1("Sam", 30, 3, 99.99);

    // Display information for LibraryMember
    cout << "Library Member: " << member1.getName() << endl;
    cout << "Member ID: " << member1.getMemberID() << endl;
    cout << "Books Borrowed: " << member1.getBooksBorrowed() << endl << endl;

    // Display information for PremiumMember
    cout << "Premium Member: " << premiumMember1.getName() << endl;
    cout << "Member ID: " << premiumMember1.getMemberID() << endl;
    cout << "Books Borrowed: " << premiumMember1.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << premiumMember1.getMembershipFee() << endl;

    return 0;
}
