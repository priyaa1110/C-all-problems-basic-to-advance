//Code for printing the sum of digits of a number.

#include<iostream>
using namespace std;

int main()
{
    char again = 'y';
    for (;again =='y' || again == 'Y';)
    {
    int n,choice;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Choose an option from below"<<endl;
    cout<<"1. For loop"<<endl;
    cout<<"2. While loop"<<endl;
    cout<<"3. Do-while loop"<<endl;
    cout<<"4. Exit!"<<endl;
    cout<<"Enter a choice from above : ";
    cin>>choice;
int sum=0, digits; 
int temp=n;
    switch (choice)
    {
        case 1:
        {
         for(;n>0; n=n/10)

         {
          digits= n%10 ;
          sum += digits;
          
         }
         cout<<"The sum of digits of "<<temp <<" is : "<<sum;

         break;
        }
 case 2:
        {
         while(n>0)

         {
          digits= n%10 ;
          sum += digits;
          n=n/10;
         }
         cout<<"The sum of digits of "<<temp <<" is : "<<sum;
         break;















































         

        }
         case 3:
        {
         do

         {
          digits= n%10 ;
          sum += digits;
          n=n/10;
         }while(n>0);
         cout<<"The sum of digits of "<<temp<<" is : "<<sum;
         break;

        }
        case 4:
        {
            cout<<"Exit!"<<endl;
            return 0;
        }
        default:
        {
            cout<<"Invalid input!"<<endl;
        break;
        }


    }
    for (;;)
    {
        cout<<"Do you want to try again (y/n) : ";
        cin>>again;
        if (again =='y'|| again=='Y' ||again =='n'||again =='N')
        {
            break;
        }
        else{
            cout<<"Invalid input! Please enter (y/n) : ";
        }
    }
    if (again == 'n'||again =='N')
    {
        cout<<"Program ended!"<<endl;
    }
    
    }
return 0;
}