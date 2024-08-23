#include <iostream>
#include<cassert>
using namespace std;

int main()
{
    int length, temp = 0, temp1, num, sum;

    cout << "Enter the length of the array: "; cin >> length; cout << endl;
    int* ar1 = new int[length];

    cout << "Your entered number in the array must be 0 to 9.\n";
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the number of the index[" << i << "]: "; cin >> ar1[i]; assert(ar1[i] >= 0 && ar1[i] <= 9);
        temp = (temp + ar1[i]) * 10;
    }

    temp1 = temp / 10;
    cout << "The sum of the array is: " << temp1 << endl << endl;

    cout << "Enter the other number to sum in this aaray: "; cin >> num;

    sum = num + temp1;
    cout << endl << "The result is: " << sum << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}
