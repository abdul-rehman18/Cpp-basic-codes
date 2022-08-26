#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int id=0;
	float area=0,circum=0,a,l,w,r;
	cout<<"Enter shapeId : "<<endl;
	cin>>id;
	switch(id){
		case 1:
			cout<<"You have chosen square please enter the length of its side:"<<endl;
			cout<<"Enter the side of the square(S): ";
			cin>>a;
			area = a*a;
			if(area<500){
				cout<<"Area of Sqaure : "<<area<<endl;
			}
			else{
				cout<<"The area excited limit of 500"<<endl;
			}
			break;
		case 2:
			cout<<"You have chosen rectangle please enter the width and height:"<<endl;
			cout<<"Enter width of rectangle : ";
			cin>>w;
			cout<<"Enter length of rectangle : ";
			cin>>l;
			area = w*l;
			cout<<"Area of Rectangle : "<<area<<endl;
			break;
		case 3:
			cout<<"You have chosen circle please enter the radius of circle:"<<endl;
			cout<<"Enter the radius: ";
			cin>>r;
			area = 3.14*r*r;
			circum= 2*3.14*r;
			if(area>circum){
				cout<<"Area of Circle : "<<area<<endl;
			}
			else{
				cout<<"Circumference of Circle is "<<circum<<endl;
			}
			break;
		default:
			exit(0);
	}
}
