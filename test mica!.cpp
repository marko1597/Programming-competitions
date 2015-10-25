#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	for(int x=0;;x++){
	    switch(rand()){
	    case 1:
 			 cout << " " << a;
	    	 break;
        case 2:
        	 cout << " "<< b;
     	 	 break;
        case 0:
        	 cout << endl;
        	 break;
        case 3:
        	 cout << " " << a << " " << b;
        	 break;
        case 4:
			 break;
 		}
	}
}
