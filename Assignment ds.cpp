#include<iostream>
using namespace std;

void enter_el(int array[], int n, int i)
{
    if(i >= n)
        return;

    cout << "Enter element No " << i+1 << ": ";
    cin >> array[i];
    enter_el(array, n, i+1);
}

void print_el(int array[], int n, int i)
{
    if(i >= n){
            cout<<endl;
        return;
    }

    cout << array[i] << " ";
    print_el(array, n, i+1);
}

int main()
{
    int array[100];
    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    // Problem No 1
    enter_el(array, n, 0);
    print_el(array, n, 0);

    // Problem No 2: Insert at front
    int push_f;
    cout << "\nEnter element to push front: ";
    cin >> push_f;

    for(int i = n; i >= 0; i--)
        array[i+1] = array[i];

    array[0] = push_f;
    n++;

    cout << endl;
    print_el(array, n, 0);

    // Problem No 3: Insert at any position
    int push_s, pos;
    cout << "\nEnter the new element: ";
    cin >> push_s;

    cout << "Enter position: ";
    cin >> pos;   // 0-based index

    for(int i = n; i >= pos; i--)
        array[i+1] = array[i];

    array[pos] = push_s;
    n++;

    cout << endl;
    print_el(array, n, 0);

    // Problem No 4: Insert AFTER a specified element
    int P, newEl;
    cout << "\nEnter the element after which you want to insert: ";
    cin >> P;

    cout << "Enter new element to insert: ";
    cin >> newEl;

    int j = -1;

    // find P in array
    for(int i = 0; i < n; i++)
    {
        if(array[i] == P)
        {
            j = i + 1;   // insert after this index
            break;
        }
    }

    if(j == -1)
    {
        cout << "Element not found. Cannot insert." << endl;
    }
    else
    {
        for(int i = n; i >= j; i--)
            array[i+1] = array[i];

        array[j] = newEl;   // FIXED: previously array[j] = P (wrong)
        n++;
    }

    cout << endl;
    print_el(array, n, 0);

    // Problem No 5: Delete first element
    for(int i = 0; i < n; i++)
        array[i] = array[i+1];

    n--;

    cout << endl;
    print_el(array, n, 0);

    //Problem No 6: Delete an Element by Index
    int pos_1;
    cout<<"Enter number of elements :";
    cin>>pos_1;

    for(int i=pos_1;i<n;i++){
        array[i]=array[i+1];
    }
    n--;
    print_el(array, n, 0);

    return 0;
}
