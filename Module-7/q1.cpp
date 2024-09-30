// Create an example of use delete and new operator. 

#include <iostream>
using namespace std;

class Example
{
private:
    int* data;
public:
    Example(int value)
    {
        data = new int; 
        *data = value;
        cout << "Constructor: Allocated memory and set value to " << *data << endl;
    }
    ~Example()
    {
        delete data; 
        cout << "Destructor: Deallocated memory" << endl;
    }

    void display() const 
    {
        cout << "Value: " << *data << endl;
    }
};

int main() 
{
    Example ex(42);
    ex.display();   
}
