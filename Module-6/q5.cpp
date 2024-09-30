/*
Write a Program of Two 1D Matrix Addition using Operator Overloading
*/

#include <iostream>
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

}