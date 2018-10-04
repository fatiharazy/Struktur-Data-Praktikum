#include <iostream>
using namespace std;

main(){
	float n, angka[5], total=0, rata;
	
	cout<<"==PROGRAM UNTUK MENCARI RATA-RATA BILANGAN=="<<endl<<endl;
	cout<<"Masukan banyak bilangan : "; cin>>n;
	cout<<endl;
	
	for (int i=1; i<=n; i++){
		cout<<"Masukan angka ke"<<i<<" : ";cin>>angka[i];
		total+=angka[i];
		}
	
	cout<<endl;	
	cout<<"Total : "<<total<<endl;
	rata=total/n;
	cout<<"Rata-rata : "<<rata;
}
