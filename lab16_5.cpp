#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int x = rand()%2;
    if(x==0){
    int z = *a;
    *a=*b;
    *b=*c;
    *c=*d;
    *d=z;
    }
    if(x==1)
    {
    int z = *b;
    int y = *c;
    *b=*d; *c =*a ; *a = y; *d = z;
    }
    }
