#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
 	int	w1,d1,h1,w2,d2,h2,c=0;
	scanf("%d %d %d",&w1,&d1,&h1);
	scanf("%d %d %d",&w2,&d2,&h2);
	
	if(w2>w1 && h2>h1 && d2>d1){
 	    c+=1;
	}
	if(w2>h1 && h2>w1 && d2>d1){
 	    c+=1;
	}
	if(w2>w1 && h2>d1 && d2>h1){
 	    c+=1;
	}
	if(w2>h1 && h2>d1 && d2>w1){
 	    c+=1;
	}
	if(w2>d1 && h2>h1 && d2>w1){
 	    c+=1;
	}
	if(w2>d1 && h2>w1 && d2>h1){
 	    c+=1;
	}
	
	if(w2<w1 && h2<h1 && d2<d1){
 	    c+=1;
	}
	if(w2<h1 && h2<w1 && d2<d1){
 	    c+=1;
	}
	if(w2<w1 && h2<d1 && d2<h1){
 	    c+=1;
	}
	if(w2<h1 && h2<d1 && d2<w1){
 	    c+=1;
	}
	if(w2<d1 && h2<h1 && d2<w1){
 	    c+=1;
	}
	if(w2<d1 && h2<w1 && d2<h1){
 	    c+=1;
	}
	
	if(w2==w1 && h2==h1 && d2==d1){
 	    c=0;
	}
	if(c>0){
	    cout << "DA";
	}else{
 	    cout << "NE";
 	}
}
