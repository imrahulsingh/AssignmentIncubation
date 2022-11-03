#include <iostream>
#include <list>

using namespace std;

int main()
{
    system("cls");
    
    list<int> l1, l2;
    int d, n, item;

    cout << endl << "Enter total number of element to be inserted into list : ";
    cin >> n;

    cout << endl << "Enter integer for D : ";
    cin >> d;

    for(int i = 0; i < n; ++i) 
    {
        cout << endl << "enter innteger to insert into list : ";
        cin >> item;
        l1.push_back(item);
    }

    // display the elements from l1
    cout << endl << "L1 = (";
    for(auto itr = l1.begin(); itr != l1.end(); ++itr)
    {
        cout << *itr << ", ";
    }
    cout << ")";

    cout << endl << "total elements in L1 : " << n;
    cout << endl << "D = " << d;

    // insert elements into L2
    for(auto itr = l1.begin(); itr != l1.end(); ++itr)
    {
        int item = *itr;
        if(item % d == 0) 
        {
            l2.push_back(item);
        }
    }

    // display elments from list2
    cout << endl << "L2 = (";
    for(auto itr = l2.begin(); itr != l2.end(); ++itr)
    {
        cout << *itr << ", ";
    }
    cout << ")";
    cout << endl << "Size of L2 : " << l2.size(); 

    return 0;
}