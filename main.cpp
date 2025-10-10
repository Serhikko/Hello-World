
#include <iostream> 
using namespace std; 
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

void datatypesExample()  
{
    int myNum = 6; //ints store whole numbers
    double decNum = 1.234;//doubles store decimal placed values
    char myLetter = 'J'; //chars store single character values
    bool isSunny = false; //bools store either true or false
    const double PI = 3.14159265359; //const variables cannot be changed
}


void valueOutputExample() 
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

void inputExample() 
{
    int userNum; //create an integer variable named userNum
    cout << "Enter a number: "; //prompt the user to enter a number
    cin >> userNum; //store the value entered by the user in the variable userNum
    cout << "You entered: " << userNum << endl; //output the value of userNum
}

void sixOrSevenNum()
{
    cout << "Hello World" << endl;
    if (6==7)
    {
        cout << "Hmm that seems odd" << endl;
    }
}


//      + 	(additional)
//      - 	(subtraction)
//      / 	(division)
//      * 	(multiplication)
//      % 	(modulus or ‘find remainder’)
//
//
//
//      ++      //two ‘plus’ signs = increase the value by 1
//      --      //two ‘minus’ signs = decrease the value by 1
//      += 2    //‘plus’ sign then ‘equals’ sign then the number 2 = increase the value by 2
//      -= 2    //minus’ sign then ‘equals’ sign then the number 2 = decrease the value by 2

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() // define main function
{ 
    
    helloWorld(); // call the function helloWorld
    datatypesExample(); // call the function datatypesExample
    valueOutputExample(); // call the function valueOutputExample
    inputExample(); // call the function inputExample
    sixOrSevenNum(); // call the function sixOrSevenNum
    
    
    return 0; //return statement
}
