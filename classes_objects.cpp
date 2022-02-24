#include <iostream>
using namespace std;

class MyClass 
{
    public:
        int myNum;
        string myString;
};

int main()
{
    MyClass myObj;

    // access atributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}