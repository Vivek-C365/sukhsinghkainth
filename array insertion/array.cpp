

#include <iostream>
using namespace std;
int main()
{
    int i, p, v, before, after, t, arr[99];
    char click1, click2, click3;
    cout << "enter array size" << endl; // array size
    cin >> t;
    cout << "enter values" << endl; // values
    for (i = 0; i < t; i++)
        cin >> arr[i];
    do
    {
        cout << " a  do u want to insert more elements " << endl;
        cout << " b do u want to delete ?" << endl;
        cout << " n press n to stop " << endl;
        cin >> click1;

        switch (click1)

        {
        case 'a':

            cout << " a at given position" << endl;
            cout << " b before any value" << endl;
            cout << " c after any value" << endl;
            cin >> click2;
            switch (click2)
            {

                // insert element at a given position in array

            case 'a':
                cout<<"enter element to insert in array";
                cin>>v;
                cout << "at which position" << endl;
                cin >> p;
                if (p == 0 || p >= t + 2)

                {
                    cout << "unable to add please enter valid position" << endl;
                }
                else
                {
                    t++; // increase numbers of elements

                    // shifting elements forward
                    for (i = t - 1; i >= p; i--)
                        arr[i] = arr[i - 1];

                    arr[i] = v;

                    cout << "array is" << endl;
                    for (i = 0; i < t; i++)
                        cout << arr[i];
                }

                break;

                // before any value

            case 'b':

                cout << "enter value before you want to insert new value"<<endl;
                cin >> before;

                for (i = 0; i < t; i++)
                    if (arr[i] == before)
                    {
                        p = i;
                    }
                cout << "enter  new value" << endl;
                cin >> v;
                if (p <= t && p > 0)
                {
                    t++;
                    for (i = t - 1; i > p; i--)
                        arr[i] = arr[i - 1];

                    arr[i] = v;
                }
                else
                {
                    if (p == t + 1)
                        arr[++t] = v;
                    else
                        cout << "unable to add" << endl;
                }
                cout << " new array is" << endl;
                for (i = 0; i < t; i++)
                    cout << arr[i];

                break;

                // after any value

            case 'c':

                cout << "enter value after you want to insert new value"<<endl;
                cin >> after;

                for (i = 0; i < t; i++)
                    if (arr[i] == after)
                    {
                        p = i + 1;
                    }
                cout << "enter  new value" << endl;
                cin >> v;
                if (p <= t && p > 0)
                {
                    t++;
                    for (i = t - 1; i > p ; i--)
                        arr[i] = arr[i - 1];

                    arr[i] = v;
                }
                else
                {
                    if (p == t + 1)
                        arr[++t] = v;
                    else
                        cout << "unable to add" << endl;
                }
                cout << " new array is" << endl;
                for (i = 0; i < t; i++)
                    cout << arr[i];

                break;
            }

        case 'n':
            if (click1 == 'n' || click1 == 'N')
            {
                return 1;
            }
            break;

            ////deletion

        case 'b':
            cout << "a before any value" << endl;
            cout << "b after any value" << endl;
            cout << "c at a given position" << endl;
            cin >> click3;
            switch (click3)
            { // before any value
            case 'a':
                cout << "enter value to delete element before the value" << endl;
                cin >> before;
                for (i = 0; i < t; i++)
                    if (arr[i] == before)
                    {
                        p = i;
                    }
                if (p == 0 || p > t)
                {
                    cout << "unable to delete" << endl;
                }
                else
                {
                    for (i = p - 1; i < t; i++)
                        arr[i] = arr[i + 1];
                    t--;
                    cout << " new array is " << endl;
                    for (i = 0; i < t; i++)
                        cout << arr[i];
                }

                break;

                // after any value
            case 'b':

                cout << "enter value to delete element after the value" << endl;
                cin >> after;
                for (i = 0; i < t; i++)
                    if (arr[i] == after)
                    {
                        p = i;
                    }
                if (p == 0 || p > t-2)
                {
                    cout << "unable to delete" << endl;
                }
                else
                {
                    for (i = p + 1; i < t; i++)
                        arr[i] = arr[i + 1];
                    t--;
                    cout << " new array is " << endl;
                    for (i = 0; i < t; i++)
                        cout << arr[i];
                }

                break;

                // at a given positon

            case 'c':
                cout << "position to delete " << endl;
                cin >> p;
                if (p == 0 || p > t)
                {

                    cout << "unable to delete" << endl;
                }
                else
                {
                    for (i = p - 1; i < t; i++)
                        arr[i] = arr[i + 1];
                    t--;
                    cout << " new array is" << endl;
                    for (i = 0; i < t; i++)
                        cout << arr[i];
                }
                break;
            }

            break;

        case 'c':

            break;
        }

    } while (click1 == 'a' || click1 == 'b' || click1 == 'n' || click2 == 'a' || click2 == 'b' || click2 == 'c' || click3 == 'a' || click3 == 'b' || click3 == 'c');
}
