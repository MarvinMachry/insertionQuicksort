#include <iostream>
#include <math.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    double tempo_gasto, t0, tf;
    t0 = clock();
    int q;
    cin>>q;
    int array[q*6];
    for(int i = 0; i < q*6; i++)
    {
        cin>>array[i];
    }
    insertionSort(array, q*6);
    printArray(array, q*6);

    tf = clock();
	tempo_gasto = ( (double) (tf - t0) ) / (CLOCKS_PER_SEC);
	cout << "Tempo: " << tempo_gasto << endl;
    return 0;
}
