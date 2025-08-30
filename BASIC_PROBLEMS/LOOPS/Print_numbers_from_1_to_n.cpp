// Code for printing numbers from 1 to n using all loops

#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter the value of n so that it can create the list of numbers u want upto : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "Choose loop type:" << endl;

    cout << "1. For Loop" << endl;
    cout << "2. While Loop" << endl;
    cout << "3. Do-While Loop" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)

    {

        cout << "Using For Loop :" << endl;

        for (int i = 1; i <= n; i++)

        {
            cout << i << endl;
        }
    }

    else if (choice == 2)

    {

        cout << "Using While Loop :" << endl;

        int i = 1;

        while (i <= n)

        {
            cout << i << endl;
            i++;
        }
    }

    else if (choice == 3)

    {

        cout << "Using Do-While Loop :" << endl;

        int i = 1;

        do

        {
            cout << i << endl;
            i++;
        } while (i <= n);
    }

    else

    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

/*OUTPUT
Enter the value of n so that it can create the list of numbers u want upto : 5
Choose loop type:
1. For Loop
2. While Loop
3. Do-While Loop
Enter choice: 2
Using While Loop :
1
2
3
4
5

*/