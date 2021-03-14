// FUNCTIONS
// THERE ARE THREE IMPORTANT PARTS IN FUNCTION : 1) FUNCTION DEFINATION    2) CALLING    3) FUNCTION DECLARATION
// FUNCTION DECLARATION IS DONE BEFORE EVEN DEFINING FUNCTION

#include<iostream>
#include<cmath>
using std::cout;				
using std::cin;
using std::endl;


//double power(double, int); // DECLARATION ::::: GENERALLY USED IN HEADER FILES (A FILE WHERE ALL FUCTION ARE DECLARED AND THEN INCLUDED WHEREVER REQUIRED.)


double power(double base, int exponent)  // defining
{
    double result = 1;
    for(int i = 0; i<exponent; i++)
    {
        result = result * base;
    }
    
    return result;
}



void print_stuff(double base, int exponent)
{
    
  
	double myPower = power(base, exponent);
	//double power =  pow(base, exponent);
	cout << base<< " raise to the "<<exponent<< " power is " <<myPower << ".\n";
}


int main()
{
    double base;
    int exponent;
    cout << "What is the base?";
	cin >> base;    
	cout << "What is the exponent";
	cin>>exponent;
	print_stuff(base, exponent);
	
}
