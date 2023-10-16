#include<iostream>
#include<string.h>
using namespace std;

     class Distance{
     	  public :
     	  	       int feet;
     	  	       int inch;
	 };
	 
	 int main()
	 {
	 	Distance d,d1,sum;
	 	
	 	cout<<"Enter feet1 = ";
	 	cin>>d.feet;
	 	cout<<"Enter inch2 = ";
	 	cin>>d.inch;
	 	
	 	sum.feet = d.feet + d1.feet;
	 	sum.inch = d.inch + d1.inch;
	 	
	 	while(sum.inch>12)
	 	{
	 		sum.feet++;
	 		sum.inch=12;
		}
		
		cout<<"feet = "<<sum.feet<<"inch = "<<sum.inch<<endl;
	 }