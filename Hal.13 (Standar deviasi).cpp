#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
	int i, n;
	float angka[100], total, totpngkt, angkapngkt[i], a;
	
	cout<<"==PROGRAM MENGHITUNG STANDAR DEVIASI=="<<endl<<endl;
	cout<< "Masukkan banyak angka : ";cin>>n;
	for(i=0; i<n; i++){
		cout<<"Masukkan angka ke-" <<i+1<<" : ";cin>>angka[i];
		total=total+angka[i];
		angkapngkt[i]=pow(angka[i],2);
		totpngkt=totpngkt+angkapngkt[i];
	}
	a=pow(total,2);
	cout<<"Standar deviasinya = "<<sqrt((n*totpngkt-a)/(n*(n-1)))<<endl;
	return 0;
}
