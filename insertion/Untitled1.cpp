#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>


using namespace std;
void mostrar(int **p, int **o);

main()
{
    int x[5]= {7,11,23,43,56};
    int *px;
    int *i = new int(0);
    px = x;
    while(*i<5)
    {
        cout<<"Endereco de memoria: "<<endl;
        cout<<px<<endl;

        cout<<"Valor do ponteiro no endereco de memoria: "<<endl;
        cout<<*px<<endl;
        px++;
        (*i)++;



    }
    cout<<"Valor do I: "<<*i<<endl;
    px-=5;
    *i-=5;
    cout<<"Novo valor do I: "<<*i<<endl;
     mostrar(&px, &i);
}

void mostrar(int **p, int **o)
{
    cout<<"Entrou na funcao mostrar: "<<endl;
    cout<<"Valor do ponteiro o: "<<**o<<endl;
    ///////////
    //////////
    //////////                          ///Quero mostrar o elemento na posicao 2 do vetor nessa funcao. Mas somente aparece o endereco.
    *p += 2;
    cout<<"AAAAAAAAAAAAAAAAAA 2: "<< **p<<endl;
    cout<<"Valor do I: "<<**o;
    while(**o<5)
    {
    cout<<"aasdasd"<<endl;
    ///Nao tinha colocado parenteses no ponteiro abaixo. Esse era o erro.
    (**o)++;
    }

}
