#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    for (char again = 'y'; again =='y'||again =='Y'; )
    {
        int n,m;
        cout<<"Enter the first number : ";
        cin>>n;
        cout<<"Enter the second number : ";
        cin>>m;

     
        
           
 int temp , temp1;
temp = abs(n);
temp1= abs(m);


if (temp ==0 && temp1 ==0)
{
    cout<<"GCD undefined since both numbers are 0"<<endl;

}
else 
{
        int choice;
        cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. While loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter a choice from above : ";
        cin >> choice;
switch (choice)
{
    case 1:
    {
cout<<"Using For loop"<<endl;
int a =temp , b =temp1;
for (; a!=b; )
{
    if (a>b)
    {
        a = a-b;
    }
    else{
        b = b-a;
    }
    
}
cout<<"GCD of "<<temp<<" and "<<temp1<<" = "<<a<<endl;
break;
    }
    case 2:
    {
        cout<<"Using While loop"<<endl;
        int a =temp , b =temp1;
        while(a!=b)
        { 
            
            if (a>b)
            {
                a = a-b;

            }
            else
            {
                b= b-a;
            }
           

        }
        cout<<"GCD of "<<temp<<" and "<<temp1<<" = "<<a<<endl;
        break;
    }
    case 3:
    {
        cout<<"Using Do-while loop"<<endl;
        int a =temp , b =temp1;
        do
        {
          if(a>b)
          {
            a=a-b;
          } 
          else
          {
            b=b-a;
          }
        
        } while (a!=b);
        cout<<"GCD of "<<temp<<" and "<<temp1<<" = "<<a<<endl;
        break;
    }
    case 4:
    {
        cout<<"Exit!"<<endl;
        return 0;
    }
    default :
    {
        cout<<"Invalid input!"<<endl;
        break;
    }
}
        }
for (;;)
{
    cout<<"Do you want to try again (y/n) : ";
    cin>>again;
    if(again == 'y'|| again =='Y'||again =='n'|| again =='N')
    {
        break;
    }
    else
    {
        cout<<"Invalid input! Please enter (y/n) : "<<endl;
    }
    
}
if (again =='n'|| again =='N')
{
    cout<<"Program ended!"<<endl;
}
    }
    return 0;
}