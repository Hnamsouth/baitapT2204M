#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	// int delta;
	printf("nhap 3 tham so :");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d %d\n",a,b,c);

	if (a != 0){
		if(b==0 && c!=0){
			float x = (float)-c/a;
			if(x > 0){
				printf(" pt co nghiem x = %f",sqrt(x));
			}else if(x=0){
				printf("pt co nghiem la = %f", x);
			}else{
				printf("pt vo nghiem");
			}
		}else if(c==0){
			float k;
			k = (float)-b/a;
			printf("pt cos nghiem x = 0\nhoac x = %f", k);
		}else{
			int delta =((b*b) - (4*a*c));
			if (delta > 0){
				float x1,x2;
				x1 = (-b + sqrt(delta))/(2*a);
				printf("pt co nghiem 1 la:%f\n",x1);
				x2 = (-b - sqrt(delta))/(2*a);
				printf("pt co nghiem  2 la:%f\n",x2);
			}else if (delta < 0){
				printf("pt vo nghiem\n");
			}else{
				float x3;
				x3 = (float)-b/(a*2);
				printf("pt co nghiem kep x1=x2=%f\n",x3);
			}
		}
		
	}
	else
	{
		printf("chay lai chuong trinh: nhap a != 0\n ");
	}


	return 0; 
}
