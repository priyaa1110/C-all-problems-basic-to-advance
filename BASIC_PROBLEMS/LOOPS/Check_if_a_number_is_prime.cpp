// Code for checking if a number is prime or not

#include <iostream>
using namespace std;

int main()
{
    char again = 'y';

    for (; again == 'y' || again == 'Y';)

    {
        int n, choice;
        cout << "Enter a number : ";
        cin >> n;

        if (n <= 1)

        {
            cout << n << " is not a prime number!" << endl;
            return 0;
        }

        cout << "Choose an option" << endl;
        cout << "1. For loop" << endl;
        cout << "2. While loop" << endl;
        cout << "3. Do-while loop" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the choice from above : " << endl;
        cin >> choice;

        bool isPrime = true;

        switch (choice)

        {

        case 1:

        {
            cout << "Using For loop" << endl;

            for (int i = 2; i * i <= n; i++)

            {

                if (n % i == 0)

                {
                    isPrime = false;
                    break;
                }
            }

            break;
        }

        case 2:

        {

            cout << "Using while loop" << endl;

            int i = 2;

            while (i * i <= n)

            {

                if (n % i == 0)

                {
                    isPrime = false;
                    break;
                }

                i++;
            }

            break;
        }

        case 3:

        {

            int i = 2;

            do

            {

                if (n % i == 0)
                {
                    isPrime = false;
                    break;
                }

                i++;

            } while (i * i <= n);

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

        if (isPrime)

        {
            cout << n << " is the prime number!" << endl;
        }

        else

        {
            cout << n << " is not the prime number!" << endl;
        }

        for (;;)

        {
            cout << "Do you want to try again(y/n) : ";
            cin >> again;

            if (again == 'y' || again == 'Y' || again == 'n' || again == 'N')

            {
                break;
            }

            else

            {
                cout << "Invalid input! Please choose (y/n) : " << endl;
            }
        }

        if (again == 'n' || again == 'N')
        {
            cout << "Progam ended!" << endl;
        }
    }

    return 0;
}

/*
OUTPUT
Enter a number : 8
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above : 
3
8 is not the prime number!
Do you want to try again(y/n) : y
Enter a number : 4
Choose an option
1. For loop
2. While loop
3. Do-while loop
4. Exit
Enter the choice from above : 
4
Exit!
*/