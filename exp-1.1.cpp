
#include<iostream>
using namespace std;

class Student{
	
	private:
		float m1,m2,m3,m4,m5;
		char sub1[10],sub2[10],sub3[10],sub4[10],sub5[10];
		
	public:
		input()
		{
		
		
		cout<<"enter sub 1:";
		cin>>sub1;
		
		cout<<"enter sub 2:";
		cin>>sub2;
		
		cout<<"enter sub 3:";
		cin>>sub3;
		
		cout<<"enter sub 4:";
		cin>>sub4;
		
		cout<<"enter sub 5:"<<endl;
		cin>>sub5;
			

		cout<<"enter marks of sub 1:";
		cin>>m1;
		
			cout<<"enter marks of sub 2:";
		cin>>m2;
		
			cout<<"enter marks of sub 3:";
		cin>>m3;
		
			cout<<"enter marks of sub 4:";
		cin>>m4;
		
			cout<<"enter marks of sub 5:"<<endl;
		cin>>m5;
		}
		
		friend float avg(Student avg1);
};

float avg(Student avg1)
{
   return float(avg1.m1+avg1.m2+avg1.m3+avg1.m4+avg1.m5)/5;
}

int main()
{


    Student avg1;
    avg1.input();
    cout<<"\naverage is :: "<<avg(avg1)<<"\n";

    return 0;
}
