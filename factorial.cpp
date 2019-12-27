#include<iostream>
#include<fstream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Russian");
	ofstream out("factorial.txt");

	double fact=1.0;
	const int count_fact=100;
	for(int i=1; i<count_fact+1; i++){
		for(double j=2.0; j<i+1; j++)
			fact*=j;
		out<<fact<<endl;
		fact=1;
	}
	cout<<"Ïðîãðàììà âûïîëíåíà!";
	_getch();
	return 0;
}
