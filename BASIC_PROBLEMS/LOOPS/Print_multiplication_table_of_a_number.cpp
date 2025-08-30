// Code for printing multiplication table of a number like a menu-driven.

#include <iostream>
using namespace std;

int main()
{
    char again = 'y';

    for (; again == 'Y' || again == 'y';)

    {
        int n, choice, k, m;
        cout << "Enter the number you want multiplication table of : ";
        cin >> n;
        cout << "Enter the number u want multiplication table upto : ";
        cin >> m;

        if (n == 0 && m == 0)

        {
            cout << "Exit because n=0 and m=0!" << endl;
            return 0;
        }

        if (m == 0)

        {
            cout << "Table upto 0 is not possible. Program ended!" << endl;
            return 0;
        }

        cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. while loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter a choice from above : ";
        cin >> choice;

        switch (choice)

        {

        case 1:

        {

            cout << "Using For loop" << endl;

            for (int i = 1; i <= m; i++)

            {

                k = n * i;

                cout << n << "x " << i << "= " << k << endl;
            }

            break;
        }

        case 2:

        {

            cout << "Using While loop" << endl;

            int i = 1;

            while (i <= m)

            {

                k = n * i;

                cout << n << " x " << i << " = " << k << endl;

                i++;
            }

            break;
        }

        case 3:

        {

            cout << "Using Do-while loop" << endl;

            int i = 1;

            do

            {

                k = n * i;

                cout << n << "x " << i << "= " << k << endl;

                i++;

            } while (i <= m);

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

        for (;;)

        {

            cout << "Do you want to try again (y/n) : ";

            cin >> again;

            if (again == 'y' || again == 'Y' || again == 'n' || again == 'N')

                break;

            else

                cout << "Invalid input! Please enter y or n." << endl;
        }

        if (again == 'n' || again == 'N')

        {

            cout << "Program ended!" << endl;

            break;
        }
    }

    return 0;
}

/*
OUTPUT
Enter the number you want multiplication table of : 9
Enter the number u want multiplication table upto : 10
Choose an option
1. For loop
2. while loop
3. Do-while loop
4. Exit
Enter a choice from above : 2
Using While loop
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 6 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90
Do you want to try again (y/n) : n
Program ended!
*/