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
	int rows;
	cout<<"Enter the number of rows\n";
	cin>>rows;
	for(int i=0; i<=rows; i++)
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
    int rows;
	cout<<"Enter the number of rows\n";
	cin>>rows;
	for(int i=rows-1; i>=0; i--)
	 {
	 	for(int j=0; j<=i; j++)
		 cout<<"*";
	 	cout<<"\n";
	 }
}
void P3()
{
	/*
	    *
	   * *
	  * * *
	 * * * *
    * * * * *
	*/
	int rows;
	cout<<" Enter the number of rows\n";
	cin>>rows;
	int space = rows -1  ;
	for (int i = 1; i<=rows; i++)
	 { for (int P_space =1; P_space<=space ;P_space++)
	       cout<<" ";

		space --;

		for (int P_Star = 1 ; P_Star<=i; P_Star++)
		 cout<<"* ";    
	 cout<<"\n";
	 
	 }
}
void P4() 
{
	cout<<"In Progress\n";
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
		case 4: P4();
		        break;
	 default:cout<<"Wrong choice, try again\n";
	}
cout<<"Do you want to run the program again\n";
cin>>ch;

}while ((ch=='y')||(ch=='Y'));
	return 0;
}