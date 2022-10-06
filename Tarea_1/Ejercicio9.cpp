#include <iostream>
using namespace std;

int main()
{
    int a;
    int n;
    int x;
    int y;
    int z;
    cout<<"Ingrese un un numero"; // 6548
    cin>>a;
    n=a%10;
    x=(a/10)%10;
    y=(a/100)%10;
    z=(a/1000)%1000;

    cout <<n<<x<<y<<z;
    return 0;


}