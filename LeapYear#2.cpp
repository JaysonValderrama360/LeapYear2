#include<iostream>
using namespace std;

  int main ()   {
{
       int n;
       cout << " Enter an eight digit integer " << endl;
       cin >> n;

       int e, m; // middle numbers wanted;

       e = n % 100000;
       m = e / 1000;

       if (m % 3 == 0 && m % 7 != 0)  {
       cout << " divisible by 3 and not 7. " << endl;
       }
       else if ( m % 7 == 0 && m % 3 != 0) {
       cout << " divisible by 7 and not 3. " << endl; }
       else if ( (m % 3 == 0) && (m % 7 == 0) ) {
       cout << " divisible by 3 and 7 " << endl;
}
       
}
{

    cout << "\n";

    int y;
    cout << " Identify Leap Year" << endl;
    cin >> y;

    if (y % 400 == 0) {
    cout << " It is a leap year." << endl; }
    else if (y % 100 == 0) {
    cout << " It is NOT a leap year." << endl; }
    else if (y % 4 ==0) {
    cout << " This is a leap year." << endl; }
    else {
    cout << " This is NOT a leap year." << endl; }

    return 0;
}

}