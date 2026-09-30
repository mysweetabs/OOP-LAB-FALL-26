#include <iostream>
#include <string>
using namespace std;

class LibraryMember
{
    string member_id;

public:
    LibraryMember(string m) : member_id(m) {}
    string getMemberID() const { return member_id; }
};

class Borrower : virtual public LibraryMember
{
    int books_borrowed;

public:
    Borrower(string m, int b) : LibraryMember(m), books_borrowed(b) {}
    int getBooksBorrowed() const { return books_borrowed; }
};

class Reviewer : virtual public LibraryMember
{
    int reviews_written;

public:
    Reviewer(string m, int r) : LibraryMember(m), reviews_written(r) {}
    int getReviewsWritten() const { return reviews_written; }
};

class PremiumMember : public Borrower, public Reviewer
{
public:
    PremiumMember(string m, int b, int r) : LibraryMember(m), Borrower(m, b), Reviewer(m, r) {}
    void print()
    {
        cout << getMemberID() << endl;
        cout << getBooksBorrowed() << endl;
        cout << getReviewsWritten() << endl;
    }
};

int main()
{
    PremiumMember abde("abde", 69, 67);
    abde.print();
    return 0;
}