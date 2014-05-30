#include<iostream>

using namespace std;

int main(void)
{
	int a,b,c,smallest,largest;
	cout << "Input three different integers:";
	cin >> a >> b >> c;
	smallest = a;
	largest = a;
	cout << "Sum is:" << a+b+c << endl;
	cout << "Average is:" << (a+b+c)/3 << endl;
	cout << "Product is:" << a*b*c << endl;
	
	if(smallest > a)
	{
	smallest = a;
	}

	if(smallest > b)
	{
	smallest = b;
	}

	if(smallest > c)
	{
	smallest = c;
	}
	
	if(largest < a)
	{
	largest = a;
	}

	if(largest < b)
	{
	largest = b;
	}

	if(largest < c)
	{
	largest = c;
	}

	cout << "Smallest is:" << smallest << endl;
	cout << "Largest is:" << largest << endl;
}
