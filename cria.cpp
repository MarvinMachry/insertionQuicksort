#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

main()
{
    srand((unsigned)time(0));
    int q;
    int tam = 0;
    for(int i = 0; i < 50000; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            tam++;
            q = tam;
            cout<<q<<" ";
        }
        cout<<endl;
    }
}

