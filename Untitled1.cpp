#include<stdio.h>
#include<math.h>
int main() {
	int nhap, sodien;
	//CHUC NANG 1
	printf(" nhap chuc nang");
	scanf("%d", &nhap);
	if(nhap == 1) {
		printf("nhap so dien tieu thu");
		scanf("%d", &sodien);
		if(sodien < 0) {
			printf("-1");
		} if(sodien >= 0 && sodien < 51) {
			sodien= sodien*1678; 
		} if(sodien > 50 && sodien < 101) {
			sodien= sodien* 1734;
		} if(sodien > 100 && sodien < 201) {
				sodien= sodien*2014;
		} if(sodien > 200 && sodien < 301) {
				sodien= sodien*2536;
		} if(sodien > 300 && sodien < 401) {
				sodien= sodien*2834;
		} if(sodien > 400) {
				sodien= sodien*2927;
		}
		printf("so dien tieu thu %d\n",sodien); 
	}
	//CHUC NANG 2
	float mucchinh;
	if(nhap == 2) {
		scanf("%f", &mucchinh);
		printf("%.0f", mucchinh * 18);
	}
	//CHUC NANG 3
	int vtdau, vtsau, soky;
	if(nhap == 3) {
		scanf("%d", &vtdau);
		scanf("%d", &vtsau);
		scanf("%d", &soky);
		if(soky > 700) {
			printf("-1");
		} else {
			if(vtdau < vtsau) {
				printf("%d", (vtsau - vtdau) * 10 * soky);
			} if(vtdau > vtsau) {
				printf("%d", (vtdau- vtsau) * soky * 2);
			}
		}
	}
	//CHUC NANG 4
	int pt, k;
	if(nhap == 4) {
		printf("");
		scanf("%d", &pt);
		printf("");
		scanf("%d", &k);
		if(pt > 100) {
			
		}
		if(k == 1) {
			printf("%.2f", pt * 5);
		} if(k == 2) {
			printf("%.2f", pt * 4);
		} if(k == 3) {
			printf("%.2f", pt * 2.15);
		} if(k == 4) {
			printf("%.2f", pt * 3.3);
		}
	}
	//CHUC NANG 5
	int n, pin2;
	float km, pin1, pin3 = 100;
	char c;
	if(nhap == 5) {
		do {
			printf("");
			scanf("%d", &n);
			c = getchar();
			if(n > 0) {
				pin1=n/(2.15);
				if(pin1 < pin3) {
					pin3=pin3-pin1;
					km=km+n;
				} else {
					km=km+pin3*2.15;
					pin3=0;
				}
			} if(n == 0) {
				pin3=pin3+25;
				if(pin3 >= 100) {
					pin3 = 100;
				}
			} if(n < 0) {
				pin2=n/(-10);
				pin3=pin3+pin2;
				if(pin3 >= 100) {
					pin3 = 100;
				} else {
					km = km - n;
				}
			}
			
		} while(c!='\n');
		printf("%.1f",km);
	}
	if (nhap > 5)
	{
		printf("nhap lai !");
	}
	return 0; 
}

