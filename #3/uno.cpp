#include <iostream.h>
#include <conio.h>
void tablamultiplo (int,int);
void main (void)
{int n,m ;
    cout <<  "q tabla desea";
    cin >> n ;
    cout << "cuantos multiplos";
    cin >> m;
tablamultiplo(m,n);
getch();
}
void tablamultiplo (int n ,int m)
{int i;
    cout << "tabla de multiplicar del :"<< n << endl;
for(i=1;i<=m,i++)
    cout << i << "x"<< n << i*n << endl;

}