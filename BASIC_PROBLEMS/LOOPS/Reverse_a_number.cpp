// Code for printing reverse of a number like a menu-driven

#include <iostream>
using namespace std;

int main()
{
    for (char again = 'y'; again == 'Y' || again == 'y';)

    {

        int n, digit, reverse = 0, temp;
        cout << "Enter the number : ";
        cin >> n;
        temp = n;

        if (temp < 0)
        {
            n = -n;
        }

        int choice;
        cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. While loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the choice from above : " << endl;
        cin >> choice;

        switch (choice)

        {

        case 1:

        {

            cout << "Using For loop" << endl;

            for (; n > 0; n = n / 10)

            {

                digit = n % 10;

                reverse = reverse * 10 + digit;
            }

            if (temp < 0)

            {

                reverse = -reverse;
            }
            cout << "The reverse of the number " << temp << " is : " << reverse << endl;

            break;
        }

        case 2:

        {

            cout << "Using While loop" << endl;

            while (n > 0)

            {

                digit = n % 10;
                reverse = reverse * 10 + digit;
                n = n / 10;
            }

            if (temp < 0)

            {
                reverse = -reverse;
            }

            cout << "The reverse of the number " << temp << " is : " << reverse << endl;
            break;
        }

        case 3:

        {
            cout << "Using Do-while loop" << endl;

            do

            {
                digit = n % 10;
                reverse = reverse * 10 + digit;
                n = n / 10;
            } while (n > 0);

            if (temp < 0)

            {
                reverse = -reverse;
            }

            cout << "The reverse of the number " << temp << " is : " << reverse << endl;
            break;
        }

        case 4:

        {
            cout << "Exit!" << endl;
            return 0;
        }

        default:

        {
            cout << "Invalid input!" << endl;
            break;
        }
        }
        for (;;)

        {
            cout << "Do you want to try again (y/n) : ";
            cin >> again;

            if (again == 'y' || again == 'Y' || again == 'n' || again == 'N')

            {
                break;
            }

            else

            {
                cout << "Invalid input! Please enter (y/n) : " << endl;
            }
        }

        if (again == 'n' || again == 'N')

        {
            cout << "Program ended!" << endl;
        }
    }

    return 0;
}

/*
OUTPUT
Enter the number : 89
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above :
1
Using For loop
The reverse of the number 89 is : 98
Do you want to try again (y/n) : y
Enter the number : -000
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above :
2
Using While loop
The reverse of the number 0 is : 0
Do you want to try again (y/n) : y
Enter the number : -45
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above :
1
Using For loop
The reverse of the number -45 is : -54
Do you want to try again (y/n) : y
Enter the number : 0001923
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above :
1
Using For loop
The reverse of the number 1923 is : 3291
Do you want to try again (y/n) : l
Invalid input! Please enter (y/n) :
Do you want to try again (y/n) : l
Invalid input! Please enter (y/n) :
Do you want to try again (y/n) : n
Program ended!
*/