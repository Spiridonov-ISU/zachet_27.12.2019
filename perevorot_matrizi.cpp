#include<iostream>
#include<fstream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Russian");
	ifstream in("arr.txt");
	if(!in.is_open()){
		cout<<"Error!"<<endl;
		return -1;
	}

	const int n=10;
	int arr[n][n];
	int gr=0;

	do{
		cout<<"Ââåäèòå íà ñêîëüêî ãððàäóñîâ õîòèòå ïîâåðíóòü ìàññèâ(ëèáî 45 ëèáî 90): "; cin>>gr; cout<<endl;
	}
	while(gr!=45 && gr!=90);
		for(int i=0; i<n; i++){
			cout<<endl;
			for(int j=0; j<n; j++){
				in>>arr[i][j];
				cout<<arr[i][j]<<" ";
			}
		}
	cout<<endl<<endl<<"Ïåðåâåðíóòàÿ ìàòðèöà íà "<<gr<<" ãðàäóñîâ:"<<endl;
	if(gr==45)
		for(int j=0; j<n; j++){
			cout<<endl;
			for(int i=0; i<n; i++)
				cout<<arr[i][j]<<" ";
		}
	else 
		for(int i=9; i>-1; i--){
			cout<<endl;
			for(int j=9; j>-1; j--)
				cout<<arr[i][j]<<" ";
		}
	_getch();
	return 0;
}
