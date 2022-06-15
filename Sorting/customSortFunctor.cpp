#include <iostream>
#include <algorithm>
using namespace std;
struct Point
{
    int x;
    int y;
};
bool sortPoints(Point p, Point q)
{
    return p.x < q.x;
}
int main()
{
    Point p[5] = {{4, 5}, {2, 3}, {7, 3}, {9, 2}, {1, 3}};
    for (int i = 0; i < 5; i++)
    {
        cout <<"{ "<< p[i].x << " " << p[i].y << " }";
    }
    cout << endl;
    sort(p, p + 5, sortPoints);
    for (Point i : p)
    {
        cout <<"{ "<<  i.x << " " << i.y << " }";
    }
    cout << endl;
}