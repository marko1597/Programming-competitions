#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>

using namespace std;

void swap1(int *arr,int index1,int index2){
	int temp=arr[index1];
	arr[index1]=arr[index2];
	arr[index2]=temp;
}
void quickSort(int *arr,int start,int end){
	int i=start;
	int k=end;
	if (end-start>=1){
		int pivot=arr[start];
		while(k>i){
			while(arr[i]<=pivot && i<=end && k>i)
				i++;
			while(arr[k]>pivot && k>=start&& k>=i)
				k--;
			if(k>i)
				swap1(arr,i,k);
		}
		swap1(arr,start,k);
		quickSort(arr,start,k-1);
		quickSort(arr,k+1,end);
	}else{
		return;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int *niz;
	int size=200;
	niz = new int[size];
	for(int x=0;x<size;x++){
		niz[x]=x;
	}
	random_shuffle(niz,niz+size);
	for(int x=0;x<size;x++){
		printf("%d\n",niz[x]);
	}
	system("pause");
	system("cls");
	quickSort(niz,0,size-1);
	for(int x=0;x<size;x++){
		printf("%d\n",niz[x]);
	}
	system("pause");
}
