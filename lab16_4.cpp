#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &w, int &x, int &y, int &z){
    int temp1, temp2, temp3;

    temp1 = w;
    w = y;
    y = temp1;

    temp2 = x;
    x = z;
    z = temp2;

    temp3 = x;
    x = y;
    y = temp3;
}