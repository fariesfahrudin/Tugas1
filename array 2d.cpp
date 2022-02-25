#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int A [4][2] = {{2,2000},{4,40000},{8,80000},{12,100000}};
	for(int x=0; x<4; x++){
		for(int y=0; y<2; y++){
			cout<<A [x][y]<<"";
	}
	cout << endl;
}
	getch();
}
