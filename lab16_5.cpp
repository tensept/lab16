#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void *shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void *shuffle(int *a,int *b,int *c,int *d){
	int x,y,z[] = {*a,*b,*c,*d};

	for(int i=0; i<4; i++){
		x = z[i];
		y = rand()%4;
		z[i] = z[y];
		z[y] = x;
	}
	*a = z[0];
	*b = z[1];
	*c = z[2];
	*d = z[3];

} 
