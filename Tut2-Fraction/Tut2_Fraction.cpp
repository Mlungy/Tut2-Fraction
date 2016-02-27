// The class fraction that handles arithmetic operations

#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction();                    // Default constructor
	void fractionReceived();
	void add(Fraction aad1, Fraction add2);
	void subtract(Fraction sub1, Fraction sub2);
	void multiply(Fraction mult1, Fraction mult2);
	void divide(Fraction div1, Fraction div2);
	void print();
	void getNumDenom();
	void setNumDenom();
private:
	int num;                       // Numerator of the class fraction
	int denom;                     // Denpmonator of the class farction
};

// Constructor of fraction class that takes no argument

Fraction::Fraction()
{

}

// The main function that handles fraction class

int main()
{
	Fraction Fraction1, Fraction2;
	Fraction fractionAdd, fractionSub, fractionDiv, fractionMult;        // Added, Subtracted, Divided and Multiplied fract5ion

	// Input the first and second fractions

	cout << "HELLO! ENTER THE FIRST FRACTION::\n\n";
	Fraction1.fractionReceived();

	cout << "HELLO! ENTER THE SECOND FRACTION::\n\n";
	Fraction2.fractionReceived();

	// function calls that manipulate fractions

	fractionAdd.add(Fraction1, Fraction2);
	fractionSub.subtract(Fraction1, Fraction2);
	fractionSub.subtract(Fraction1, Fraction2);
	fractionDiv.divide(Fraction1, Fraction2);
	fractionMult.multiply(Fraction1, Fraction2);

	// Print the out

	cout << "ADDITION RESULT:\n\n";
	fractionAdd.print();

	cout << "SUBTRACTION RESULT:\n\n";
	fractionSub.print();

	cout << "DIVISION RESULT:\n\n";
	fractionDiv.print();

	cout << "MULTIPLICATION RESULT:\n\n";
	fractionMult.print();

	system("pause");
	return 0;
}

// Functions that accept fraction's input

void Fraction::fractionReceived()
{
	cout << "Enter the numerator:\n\n";
	cin >> num;

	cout << "Enter the denominator:\n\n";
	cin >> denom;
}

void Fraction::add(Fraction a, Fraction b)
{
	denom = a.denom *b.denom;
	num = (a.num*b.denom) + (b.num*a.denom);
}

void Fraction::subtract(Fraction sub1, Fraction sub2)
{
	denom = sub1.denom*sub2.denom;
	num = (sub1.num*sub2.denom) - (sub2.num*sub1.denom);
}

void Fraction::divide(Fraction div1, Fraction div2)
{
	denom = div1.denom*div2.num;
	num = (div1.num*div2.denom);
}

void Fraction::multiply(Fraction mult1, Fraction mult2)
{
	denom = mult1.denom*mult2.denom;
	num = mult1.num*mult2.denom;
}

void Fraction::print()
{
	cout << "The result is:" << num << "/" << denom << "\n\n";
}
