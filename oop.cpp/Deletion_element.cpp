// Deleting element in an array

#include <iostream>
using namespace std;

int main()

{

    int n, i, elem, j, found = 0;

    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)

        cin >> arr[i];

    cin >> elem;

    for (i = 0; i < n; i++)

    {

        if (arr[i] == elem)

        {

            for (j = i; j < (n - 1); j++)

                arr[j] = arr[j + 1];

            found = 1;

            n--;

            break;
        }
    }

    if (found == 0)

        cout << "\nElement doesn't found in the Array!";

    else

    {

        cout << "\nElement Deleted Successfully!";

        cout << "\n\nThe New Array is:\n";

        for (i = 0; i < n; i++)

            cout << arr[i] << "  ";
    }

    cout << endl;

    return 0;
}