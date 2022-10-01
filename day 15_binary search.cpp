
#include <iostream>

using namespace std;

int binarySearch(int[], int, int, int);

int main()

{

    int x;

    cin >> x;

    int num[x];

    for (int i = 0; i < x; i++)

    {

        cin >> num[i];

    }

    int search_num, loc = -1;

    cin >> search_num;

    loc = binarySearch(num, 0, 6, search_num);

    if (loc != -1)

    {

        cout << loc - 1;

    }

    else

    {

        cout << "-1";

    }

    return 0;

}

int binarySearch(int a[], int first, int last, int search_num)

{

    int middle;

    if (last >= first)

    {

        middle = (first + last) / 2;

        if (a[middle] == search_num)

        {

            return middle + 1;

        }

        else if (a[middle] < search_num)

        {

            return binarySearch(a, middle + 1, last, search_num);

        }

        else

        {

            return binarySearch(a, first, middle - 1, search_num);

        }

    }

    return -1;

}

