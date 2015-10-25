#include <cstdio>
#include <cstring>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main(){
	int y;
	scanf("%d",&y);
	if(y%4==0 && (y%100 != 0 || y%400 == 0)){
		printf("Prestupna");
	}else{
		printf("Nije prestupna");
	}
}
