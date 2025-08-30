// Code for printing even numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    cout << "Enter the value of n upto which you want the even number : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Choose which loop you want to use" << endl;
    cout << "1. For loop" << endl;
    cout << "2. While loop" << endl;
    cout << "3. Do-while loop" << endl;
    cout << "Enter a choice for loops from above : ";
    cin >> choice;

    if (choice < 1 || choice > 3)
    {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    if (1 == choice)

    {
        cout << "Using For loop!" << endl;
        for (int i = 1; i <= n; i++)

        {

            if (i % 2 == 0)

            {
                cout << i << endl;
            }
        }
    }

    if (2 == choice)

    {

        int i = 1;

        cout << "Using While loop!" << endl;
        while (i <= n)

        {

            if (i % 2 == 0)

            {
                cout << i << endl;
            }

            i++;
        }
    }

    if (3 == choice)

    {

        int i = 1;

        cout << "Using Do-while loop!" << endl;
        do

        {

            if (i % 2 == 0)

            {

                cout << i << endl;
            }

            i++;

        } while (i <= n);
    }

    return 0;
}

/*
OUTPUT
Enter the value of n upto which you want the even number : 7
Choose which loop you want to use
1. For loop
2. While loop
3. Do-while loop
Enter a choice for loops from above : 1
Using For loop!
2
4
6
*/