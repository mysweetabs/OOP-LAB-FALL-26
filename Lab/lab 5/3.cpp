#include <iostream>
using namespace std;
class Member
{

    const string membershipID;
    static string gymName;
    static int memberships;
    string memberName;
    long long memberContact;

public:
    Member(string id, string mn, long long n) : membershipID(id), memberName(mn), memberContact(n) { memberships++; }

    void setMemberName(string s) { memberName = s; }
    void setMemberContact(long long n) { memberName = n; }

    string getMemberName() const { return memberName; }
    long long getMemberContact() const { return memberContact; }

    static int getMemberships() { return memberships; }

    void displayMemberships() const
    {
        cout << "\nguest name: " << memberName << endl;
        cout << "room Number: " << membershipID << endl;
        cout << "hotel Name: " << gymName << endl;
    }
};

int Member::memberships = 0;
string Member::gymName = "Gold's Gym";

int main()
{
    Member m1("0084", "abde", 03000000000);
    Member m2("0007", "ham", 03111111111);
    Member m3("0001", "feebi", 03222222222);

    m1.displayMemberships();
    m2.displayMemberships();
    m3.displayMemberships();

    cout << "\nnumber of memberships: " << Member::getMemberships() << endl;

    return 0;
}
