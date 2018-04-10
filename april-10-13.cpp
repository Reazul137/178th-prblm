#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3;

    cout << "\n\n Enter two angles of a triangle and find the third angle : \n";
    cout << "---------------------------------------------------------------\n";

    cout << " Input the 1st angle of the triangle : ";
    cin >> a1;

    cout << " Input the 2nd angle of the triangle : ";
    cin >> a2;

    a3= 180 - (a1+a2);

    cout << "The 3rd of the triangle is : "<< a3<< endl;
    cout << endl;

    return 0;
}
