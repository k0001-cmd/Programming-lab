/* 1. Write a class to implement complex number : 
a) constructor
a)addition
c) subtraction
d) multiplication
e) display */

#include <iostream>

using namespace std;

class complexNum
{
	private :
		double real, imag;
		
		public :
			
			complexNum()
			{
				real=0.0;
				imag = 0.0;
				cout<<"initialising a zero valued complex number\n";
			}
			complexNum(double re, double im)
			{
				real=re;
				imag=im;
				cout<<"Initialising with the two given inputs.\n";
			}
			
			complexNum add(complexNum c)
			{
				complexNum ne;
			}
			void display()
			{
				
				cout<<real<<"+i "<<imag<<endl;
			}
			
			double getReal(){ return real;
			}
			void setreal(double re) { 
			real=re;
			}
            double getimaginary(){
            	return imag;
			}
			void setImaginary(double im){
				imag=im;
			}
			
			
};
	int main()
	{
		complexNum num1(3,-5);
		complexNum num2(10,2);
		
		complexNum num3;
		num3.setreal(num1.getReal()+num2.getReal());
		num3.setImaginary(num1.getimaginary()+num2.getimaginary());
		
		
		num1.display();
		num2.display();
		num3.display();
	}
	
