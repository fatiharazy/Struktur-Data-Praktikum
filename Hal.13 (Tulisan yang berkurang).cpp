#include <iostream>
using namespace std;

int main()
{
    string kata;
    cout<<"==PROGRAM UNTUK MENAMPILKAN TULISAN YANG BERKURANG=="<<endl<<endl;
    cout<<"Masukkan kata : "; cin>>kata;
    cout<<endl;
    
    int i=kata.length()-1;
    for (i; i>=0; i--){
        for(int a=0 ;a<=i; a++){
            cout<<kata[a];
        }
        cout<<endl;
    }
    return 0;
}
