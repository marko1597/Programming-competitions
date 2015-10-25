#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int check(double a, double b, double c, double d, double kut){
	double x1, x2, y1, y2;
	double k = tan(kut*M_PI/180);
	if (kut == M_PI / 2){
		x1 = -d / 2;
		x2 = d / 2;
		y1 = c / 2;
		y2 = c / 2;
	}else{
		x1 = (c - d*k) / (2 * sqrt(k*k + 1));
		x2 = (c + d*k) / (2 * sqrt(k*k + 1));
		y1 = (+d + c*k) / (2 * sqrt(k*k + 1));
		y2 = (-d + c*k) / (2 * sqrt(k*k + 1));
	}
	if (x1 <= a / 2 && x2 <= a / 2 && y1 <= b / 2 && y2 <= b / 2){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	double a, b, x, y;
	scanf("%d", &t);
	int ans;
	while (t--){
		ans = 0;
		scanf("%lf %lf %lf %lf", &a, &b, &x, &y);
		for (double i = 0; i <= 90; i += 0.1){
			if (check(a, b, x, y, i))
				ans = 1;
		}
		if (ans){
			printf("Escape is possible.\n");
		}else{
			printf("Box cannot be dropped.\n");
		}
	}
	return 0;
}
