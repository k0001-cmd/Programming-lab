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
				cout<<"Initialising with the two given inputs.\n \n ";
			}
			
			complexNum add(complexNum c)
			{
				complexNum ne;
			}
			void display()
			{
				
				cout<<real<<"+i "<<"("<<imag<<")"<<endl<<"\n";
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
			
		 void add (complexNum num1, complexNum num2)
		 {
		 	real=num1.real+num2.real;
		 	imag=num1.imag+num2.imag;
		 	display();
		 }
		 
		 void multiply (complexNum num1, complexNum num2)
		 {
		 	real=num1.real*num2.real;
		 	imag=num1.imag*num2.imag;
		 	display();
		 }
		 
		  void subtract (complexNum num1, complexNum num2)
		 {
		 	real=num1.real-num2.real;
		 	imag=num1.imag-num2.imag;
		 	display();
		 }
		 
};
	int main()
	{
		complexNum num1(3,-5);
		complexNum num2(10,2);
		
		cout<<"\n complex no. 1 : "<<endl;
		num1.display();
		cout<<"\n complex no. 2 : "<<endl;
		num2.display();
		
		complexNum num3;
		cout<<"\n the addition result : "<<endl;
		num3.add(num1,num2);
		cout<<"the multiplication result : "<<endl;
		num3.multiply(num1,num2);
		cout<<"the subtraction result : "<<endl;
		num3.subtract(num1,num2);
	}

/*	Output : Initialising with the two given inputs.

 Initialising with the two given inputs.


 complex no. 1 :
3+i (-5)


 complex no. 2 :
10+i (2)

initialising a zero valued complex number

 the addition result :
13+i (-3)

the multiplication result :
30+i (-10)

the subtraction result :
-7+i (-7)
	*/
