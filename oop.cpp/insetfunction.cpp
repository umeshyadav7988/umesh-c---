#include <bits/stdc++.h>
using namespace std;

// Function to insert x in arr at position pos

int *f(int arr[], int n, int pos, int x)
{

    // shift elements forward
    for (int i = n; i > pos; i--)

        arr[i] = arr[i - 1];

    // insert x at pos

    arr[pos] = x;

    return arr;
}
// Driver Code

int main()

{

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int *a = new int[n + 1];

        for (int i = 0; i < n; i++)

            cin >> a[i];

        int pos;

        cin >> pos;

        int x;

        cin >> x;

        a = f(a, n, pos, x);

        for (int i = 0; i < n + 1; i++)

            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}
