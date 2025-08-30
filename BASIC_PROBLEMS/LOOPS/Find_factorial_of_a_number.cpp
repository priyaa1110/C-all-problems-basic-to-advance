// Code for printing factorial of a  number like a menu-driven

#include <iostream>
using namespace std;

int main()
{
    char again;
    do
    {
        int n, choice;

        cout << "Enter a number you want to find the factorial of : ";
        cin >> n;

        if (n < 0)

        {
            cout << "Factorial of negative number is not defined!" << endl;
            return 1;
        }

        else if (n == 0)

        {
            cout << "Factorial of 0 is 1." << endl;
            return 0;
        }

        cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. While loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter a choice from above : ";
        cin >> choice;

        long long int fact = 1;

        switch (choice)

        {

        case 1:
        {
            cout << "Using For loop!" << endl;
            for (int i = 1; i <= n; i++)

            {
                fact = fact * i;
            }
            cout << "Factorial of " << n << " is " << fact << "." << endl;
            break;
        }

        case 2:

        {
            cout << "Using While loop!" << endl;

            int i = 1;
            while (i <= n)
            {
                fact = fact * i;
                i++;
            }
            cout << "Factorial of " << n << " is " << fact << "." << endl;
            break;
        }
       
        case 3:
       
        {
            cout << "Using Do-while loop!" << endl;

            int i = 1;
            do
            {
                fact = fact * i;
                i++;
            } while (i <= n);
            cout << "Factorial of " << n << " is " << fact << "." << endl;
            break;
        }

        case 4:
       
        {
            cout << "Exit!" << endl;
            return 0;
        }
       
        default:
       
        {
            cout << "Invalid choice!" << endl;
            break;
        }
       
    }
       
        do
       
        {
            cout << "Do you want to try again (y/n): ";
            cin >> again;
    
            if (again != 'y' && again != 'Y' && again != 'n' && again != 'N')
    
            {
            cout << "Invalid input! Please enter y or n." << endl;
            }
    
        } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');

    } while (again == 'Y' || again == 'y');

    cout << "Program ended!" << endl;

    return 0;
}

/*
OUTPUT
Enter a number you want to find the factorial of : 9
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter a choice from above : 3
Using Do-while loop!
Factorial of 9 is 362880.
Do you want to try again (y/n): o
Invalid input! Please enter y or n.
Do you want to try again (y/n): N
Program ended!
*/