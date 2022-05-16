#include <stdio.h>
#include <math.h>
// diện tích tam giác theo CT heron: S = sqrt(p(p-a)(p-b)(p-c))
//  p là nửa chu vi tam giác có CT là  : p = (a+b+c)/2
int main()
{
		int a, b, c;
		printf("nhap chieu dai 3 canh tam giac\n" );
	do{
		scanf("%d %d %d", &a, &b, &c); 
		printf("canh a=%d , canh b=%d , canh c=%d \n", a, b, c);
		if ((a+b > c )&& ( b+c > a )&& (c +a> b))
		{
			int p;
			float Stg;
			p = ((a+b+c));
			float p2=(float)p/2;
			printf("nua chu vi cua tam giac = %.1f\n",p2 );
			Stg = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
			printf("Dien tich tam giac = %.2f\n",Stg );
		}
		else
		{
			printf("khong thoa man dk (a,b,c)>0\nnhap lai:");
		}
	}while(a,b,c > 0);
	return 0;

}

