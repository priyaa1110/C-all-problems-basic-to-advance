#include<iostream>
using namespace std;

int main()
{
    for (char again ='y'; again =='y'||again =='Y';)
    {
        int n,choice;
        long long int a =0, b= 1, c;
        cout<<"Enter the number of terms : ";
        cin>>n;

        if (n<=0 )
        {
            cout<<"Number of terms can't be 0 or negative!";
        }
        else{
         cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. While loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the choice from above : " << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
            { cout<<"Using For loop"<<endl;
                cout<<"Fibonacci series"<<endl;

                for (int i =1; i<=n ; i++)
                {
                if (i == 1)
                {
                    cout<<a<<" ";
                    continue;
                }
                if (i ==2)
                {
                    cout<<b<<" ";
                    continue;
                }
                c = a+b;
                cout<<c<<" ";
                a=b;
                b=c;
              
            
            }
break;
            }
            case 2:
            {
                cout<<"Using While loop"<<endl;
                cout<<"Fibonacci series"<<endl;
                int i =1;
                while(i<=n)
                {
                    if(i==1)
                    {
                        cout<<a<<" ";
                        i++;
                        continue;
                    }
                    if(i ==2)
                    {
                        cout<<b<<" ";
                        i++;
                        continue;
                    }
                    c=a+b;
                    i++;
                    cout<<c<<" ";
                    a=b;
                    b=c;
                   
                }
                break;
                
            }
            case 3:
            {
                cout<<"Using Do-while loop"<<endl;
                cout<<"Fibonacci series"<<endl;
                int i =1;
               do
                {
                    if(i==1)
                    {
                        cout<<a<<" ";
                        i++;
                        continue;
                    }
                    if(i ==2)
                    {
                        cout<<b<<" ";
                        i++;
                        continue;
                    }
                    c=a+b;
                    i++;
                    cout<<c<<" ";
                    a=b;
                    b=c;
                   
                } while(i<=n);
                break;
                cout<<endl;
            }
            case 4:
            {
                cout<<"Exit!"<<endl;
                return 0;
            }
            default:
            {
                cout<<"Invalid input!";
                break;
            }
        }
        }
        cout<<endl;
        for (;;)
        {
            cout<<"Do you want to try again (y/n) : ";
            cin >>again;
            if(again =='y'||again =='Y'||again =='n'||again =='N')
            {
                break;
            }
            else
            {
                cout<<"Invalid input! Please enter (y/n) : ";
            }
        }
    
        if (again =='n' ||again =='N')
        {
            cout<<"Program ended!"<<endl;
        }
    }
    return 0;
}

/*
OUTPUT
Enter the number of terms : 6
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above : 
1
Using For loop
Fibonacci series
0 1 1 2 3 5 
Do you want to try again (y/n) : n
Program ended!
*/