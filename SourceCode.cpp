#include<iostream>
using namespace std;

void P1()                                         
{
/*
	*
	**
	***
	****
	*****
*/
	int x;
	cout<<"Enter the number of rows\n";
	cin>>x;
	for(int i=0; i<=x; i++)
	 {
	 	for(int j=0; j<=i; j++)
		 cout<<"*";
	 	cout<<"\n";
	 }
}
void P2()   
{ 
/*
	*****
	****
	***
	**
	*
	
*/
    int x;
	cout<<"Enter the number of rows\n";
	cin>>x;
	for(int i=x-1; i>=0; i--)
	 {
	 	for(int j=0; j<=i; j++)
		 cout<<"*";
	 	cout<<"\n";
	 }
}
void P3()
{
	cout<<"In Progess\n";
}
int main()
{   int choice;
    char ch;
do{	
	cout<<"Enter the pattern number\n";
	cin>>choice;
	switch(choice)
	{
		case 1: P1();
		        break;
		case 2: P2();
		        break;
		case 3: P3();
		        break;
	 default:cout<<"Wrong choice, try again\n";
	}
cout<<"Do you want to run the program again\n";
cin>>ch;

}while ((ch=='y')||(ch=='Y'));
	return 0;
}