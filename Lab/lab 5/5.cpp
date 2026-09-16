#include <iostream>
using namespace std;
class Policy
{

    const string policyNumber;
    static int policies;
    string policyHolderName;
    int premiumAmount;

public:
    Policy(string pn, string phn, int n) : policyNumber(pn), policyHolderName(phn), premiumAmount(n) { policies++; }

    void setpolicyHolderName(string s) { policyHolderName = s; }
    void setpremiumAmmount(int n) { premiumAmount = n; }

    string getpolicyHolderName() const { return policyHolderName; }
    int getpremiumAmmount() const { return premiumAmount; }

    static int getpolicies() { return policies; }

    void displayPolicyInfo() const
    {
        cout << "\nPolicy holder name: " << policyHolderName << endl;
        cout << "policy number: " << policyNumber << endl;
        cout << "premium amount: " << premiumAmount << endl;
    }

    ~Policy() { cout << "\nPolicy closed!" << endl; }
};

int Policy::policies = 0;

int main()
{
    Policy p1("001", "abde", 5000);
    Policy p2("007", "hammy", 10000);
    Policy p3("084", "feebi", 15000);

    p1.displayPolicyInfo();
    p2.displayPolicyInfo();
    p3.displayPolicyInfo();

    cout << "\nCurrent policies: " << Policy::getpolicies() << endl;

    return 0;
}
