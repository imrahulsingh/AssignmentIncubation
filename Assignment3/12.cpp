#include <iostream>
#include <map>
#include <vector>

#define PI 3.14 // define for PI value

using namespace std;

class Circle
{
    public:
    double x, y, radius, area;

    void calArea();
    void display();
};

void Circle :: calArea()
{
    this->area = PI * radius * radius;
}

void Circle :: display()
{
    cout << "x = " << this->x << ", y = " << this->y << ", radius = " << this->radius;
}

int main()
{
    multimap<double, Circle> circle_list; // to store record for each circle in ascending order by area.

    int N;
    cout << endl << "Enter value for N(total number of circle) : " ;
    cin >> N;

    // take input from user 
    // for each circle
    for(int i = 1; i <= N; ++i)
    {
        system("cls");

        Circle circle;
        cout << endl << "Enter input for circle #" << i;
        cout << endl << "--------------------------------------------";
        cout << endl << "Enter radius value : ";
        cin >> circle.radius;
        cout << endl << "Enter X-Axis co-ordinate for centre : ";
        cin >> circle.x;
        cout << endl << "Enter Y-Axis co-ordinate for centre : ";
        cin >> circle.y;

        // calculate area of circle
        circle.calArea();

        // insert record into map
        circle_list.insert(make_pair(circle.area, circle));
    }

    // display detail of each circle
    cout << endl << "Area\t\tCircle_data";
    cout << endl << "--------------------------------------------------------------------";
    for(auto itr = circle_list.begin(); itr != circle_list.end(); ++itr)
    {
        cout << endl << itr->first << "\t\t";
        Circle c = itr->second;
        c.display();
    }
    cout << endl;
    return 0;
}