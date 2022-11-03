#include <iostream>
#include <list>

using namespace std;

int main()
{
    system("cls");
    
    list<int> l1, l2;
    int N, M, item;

    cout << endl << "Enter total number of items inserted into the list : " ;
    cin >> N;

    cout << endl << "Enter integer to multiply with each list item : ";
    cin >> M;

    for(int i = 0; i < N; ++i)
    {
        cout << endl << "Enter integer to insert into the list : ";
        cin >> item;
        l1.push_back(item);
    }

    // multiply M with each item of list
    // display items from first list
    cout << endl << "Elements from first list => ";
    for(auto itr = l1.begin(); itr != l1.end(); ++itr)
    {
        int element = *itr;
        cout << endl << element; // display item from first list
        element *= M;
        l2.push_back(element);
    }

    // display elements from second list
    cout << endl << "\nElements from second list => ";
    for(auto itr = l2.begin(); itr != l2.end(); ++itr)
    {
        cout << endl << *itr;
    }
    return 0;
}