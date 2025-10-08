
#include <iostream> // preprocessor directive - include iostream file
using namespace std; // declare use of the standard namespace
#include <string>


void helloWorld() // define a function named myFunction
{
    cout << "---------------------------\n" << endl;
	cout << "Hello World" << endl; // output statement
    cout << "Hello, World! This is the first line \n";
    cout << "Here is a second line \n";
    cout << "Here is a third line \n";
    cout << "---------------------------\n" << endl;
}

void datatypesExample()  // define a function named myFunction
{
    int myNum = 6; //ints store whole numbers
    double decNum = 1.234;//doubles store decimal placed values
    char myLetter = 'J'; //chars store single character values
    bool isSunny = false; //bools store either true or false
    const int PI = 3.14159265359; //const variables cannot be changed
}


void valueOutputExample() // define a function named myFunction
{
    int myNum = 6; 
    double decNum = 1.234;
    string myString = "Hello";//create string with the value Hello
    myString.append(" World");//add the value " World" to the string to make it "Hello World"
    cout << myString << endl; //output the value of myString
    cout << myNum << endl; //output the value of myNum
    cout << decNum << endl; //output the value of decNum   
    cout << "---------------------------\n" << endl;    
} // end of function body





//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() // define main function
{ 
    
    helloWorld(); // call the function helloWorld
    datatypesExample(); // call the function datatypesExample
    valueOutputExample(); // call the function valueOutputExample
    
   
    
    
    return 0; //return statement
}
