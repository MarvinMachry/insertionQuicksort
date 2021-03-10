#include <iostream>
#include <time.h>
using namespace std;

void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}

int main(int argc, char *argv[])
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
	cout << endl;
	quicksort(array, 0, q*6);
	for(int i = 0; i < q*6; i++)
	{
		cout << array[i] << ' ';
	}

	tf = clock();
	tempo_gasto = ( (double) (tf - t0) ) / (CLOCKS_PER_SEC);
	cout << "Tempo: " << tempo_gasto << endl;
	return 0;
}
