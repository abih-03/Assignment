/*#include <iostream>
using namespace std;

class Interest
{
private:
    int principal;
    int year;     
    float rate;   
    float simpleInterest; 

public:
    
    Interest(int p, int y, int r)
    {
        principal = p;
        year = y;
        rate = r;
        calculateSimpleInterest();
    }

    Interest(int p, int y, float r = 2.5)
    {
        principal = p;
        year = y;
        rate = r;
        calculateSimpleInterest();
    }

    void calculateSimpleInterest()
    {
        simpleInterest = (principal * rate * year) / 100;
    }

    void display() const
    {
        cout << "\nPrincipal: " << principal << endl;
        cout << "Years: " << year << endl;
        cout << "Rate of interest: " << rate << "%" << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main()
{
    Interest interest1(10000, 5, 10); 
    interest1.display();

    Interest interest2(20000, 3);
    interest2.display();

    Interest interest3(15000, 4, 3.5);
    interest3.display();
}
*/

/*#include <iostream>
using namespace std;

class Interest {
    int principal;
    int year;
    float rate;
    float simpleInterest;

public:
    // Constructor with int rate
    Interest(int p, int y, int r) {
        principal = p;
        year = y;
        rate = r;
        calculateInterest();
    }

    // Constructor with float rate and default value
    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r;
        calculateInterest();
    }

    void calculateInterest() {
        simpleInterest = (principal * year * rate) / 100;
    }

    void display() {
        cout << "Principal: " << principal << endl;
        cout << "Year: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main() {
    int p, y, r;
    float rf;

    cout << "Enter principal, year, and rate (int): ";
    cin >> p >> y >> r;
    Interest intRateInterest(p, y, r);
    intRateInterest.display();

    cout << "\nEnter principal, year, and rate (float, default 2.5): ";
    cin >> p >> y >> rf;
    Interest floatRateInterest(p, y, rf);
    floatRateInterest.display();

    return 0;
}
*/



/*#include <iostream>
using namespace std;

class Calculator
{
public:
    // Inline function for multiplication
    inline float multiply(float x, float y)
    {
        return x * y;
    }

    // Inline function for cubic value
    inline float cube(float x)
    {
        return x * x * x;
    }
};

int main()
{
    Calculator calc;
    float val1, val2;

    cout << "Enter two values: ";
    cin >> val1 >> val2;

    cout << "Multiplication value is: " << calc.multiply(val1, val2) << endl;
    cout << "Cube value of " << val1 << " is: " << calc.cube(val1) << endl;
    cout << "Cube value of " << val2 << " is: " << calc.cube(val2) << endl;

}*/


/*#include <iostream>
using namespace std;

class Matrix
{
private:
    int size;
    int* arr;

public:
    // Constructor to initialize the matrix with a given size
    Matrix(int s) : size(s)
    {
        arr = new int[size];
    }

    // Destructor to free the allocated memory
    ~Matrix()
    {
        delete[] arr;
    }

    // Function to input matrix elements
    void input()
    {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
    }

    // Overloading the + operator to add two matrices
    Matrix operator+(const Matrix& m)
    {
        Matrix result(size);
        for (int i = 0; i < size; ++i) 
        {
            result.arr[i] = this->arr[i] + m.arr[i];
        }
        return result;
    }

    // Function to display matrix elements
    void display() const
    {
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size), m2(size);

    cout << "Input elements for the first matrix:" << endl;
    m1.input();

    cout << "Input elements for the second matrix:" << endl;
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "Resultant matrix after addition:" << endl;
    m3.display();

}*/

#include <iostream>
#include <cstring>
using namespace std;

class String 
{
private:
    char str[100];

public:
    
    String(const char* s = "")
    {
        strcpy(str, s);
    }

    
    String operator+(const String& s)
    {
        String result;
        strcpy(result.str, str);
        strcat(result.str, s.str);
        return result;
    }

    
    void display() const
    {
        cout << str;
    }
};

int main() 
{
    String str1("Hello, ");
    String str2("World!");

    String str3 = str1 + str2;

    cout << "Concatenated String: ";
    str3.display();
    cout << endl;
}
