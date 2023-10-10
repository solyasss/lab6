#include <iostream>
#include "exception.h"
#include "divide_by_zero.h"
using namespace std;

class index_exception : public Exception
{
public:
    index_exception(const char *message) : Exception(message) {}

    virtual const char *get_message() const
    {
        return what();
    }
};

int main()
{
    double numerator = 0.0;
    double denominator = 0.0;

    try
    {
        cout << "Enter a numerator: ";
        cin >> numerator;

        cout << "Enter a denominator: ";
        cin >> denominator;

        if (denominator == 0.0)
        {
            throw divide_by_zero("Divide by zero");
        }
        cout << "Result:" << numerator / denominator << endl;

        int array[3]{1, 2, 3};
        for (int i = 0; i < 5; i++)
        {
            if (i >= 3)
            {
                throw index_exception("No index");
            }
            cout << array[i] << "\t";
        }
        cout << endl;
    }
    catch (divide_by_zero exception)
    {
        cout << exception.get_message() << endl;
    }
    catch (index_exception exception)
    {
        cout << exception.get_message() << endl;
    }

    return 0;
}
