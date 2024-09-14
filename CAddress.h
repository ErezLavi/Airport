
#ifndef AIRPORT_CADDRESS_H
#define AIRPORT_CADDRESS_H
#include <string>

using namespace std;

class CAddress
{
private:
    string city;
    string street;
    int houseNumber = 0;

public:
    CAddress(const int houseNum, const string& street, const string& city = "Tel Aviv");
    CAddress(const CAddress& other) = default; //copy constructor
    CAddress() = delete;
    const CAddress& operator=(const CAddress& other);
    ~CAddress() = default;                     //destructor 
    void updateAddress(const string& newCity, const string& newStreet, int houseNum);
    const string getCity() const;
    const string getStreet() const;
    const int getHouseNumber() const;
    void Print() const;
    friend ostream& operator<<(ostream& os,const CAddress& address);
    friend istream & operator>>(istream & in,  CAddress& address);
    bool operator==(const CAddress& other) const;
    bool operator!=(const CAddress& other) const;
    string GetCurrentAddress() const;
};


#endif //AIRPORT_CADDRESS_H
