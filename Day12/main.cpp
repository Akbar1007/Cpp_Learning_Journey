// Day 12 

#include <iostream>
#include <string>
using namespace std;

class RealEstate
{
private:
    int propertyId;
    int propertyValue;
    string propertyName;

public:
    // getting and setting getPropertyId
    int getPropertyId() 
    {
        return propertyId;
    }
    void setPropertyId(int id)
    {
        propertyId = id; 
    }

		// the same with PropertyValue
    int getPropertyValue()
    {
        return propertyValue;
    }

    void setPropertyValue(int value)
    {
        propertyValue = value;
    }

		// the same with propertyName
    string getPropertyName()
    {
        return propertyName;
    }

    void setPropertyName(string name)
    {
        propertyName = name;
    }
     
};

int main()
{
    RealEstate object;

    // declaring variables:
    int id, value;
    string name;

    cout << "Enter the id: ";
    cin >> id;
    object.setPropertyId(id);

    cout << "Enter the value: ";
    cin >> value;
    object.setPropertyValue(value);

    // propertyName
    cout << "Enter the name: ";
    cin >> name;
    object.setPropertyName(name);

    // printing out the results:
    cout << "ID: " << object.getPropertyId() << endl;
    cout << "Value: " << object.getPropertyValue() << endl;
    cout << "Name: " << object.getPropertyName() << endl;
}