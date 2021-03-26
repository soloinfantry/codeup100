#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int n1()
{
	printf("Hello");
	return 0;
}
int n2()
{
	printf("Hello World");
	return 0;
}
int n3()
{
	printf("Hello\nWorld");
	return 0;
}
int n4()
{
	printf("\'Hello\'");
	return 0;
}
int n5()
{
	printf("\"Hello World\"");
	return 0;
}
int n6()
{
	printf("\"!@#$%%^&*()\"");
	return 0;
}
int n7()
{
	printf("\"C:\\Download\\hello.cpp\"");
	return 0;
}
int n8()
{
	printf("\u250C\u252C\u2510\n\u251c\u253c\u2524\n\u2514\u2534\u2518");
	return 0;
}
int n10()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", n);

	return 0;
}
int n11()
{
	char x;
	scanf_s("%c", &x);
	printf("%c", x);
	return 0;
}
int n12()
{
	float x;
	scanf("%f", &x);
	printf("%f", x);
	return 0;
}
int n13()
{
	int a, b;
	scanf("%d%d", &a, &b);  
	printf("%d %d", a, b);
}
int n14()
{
	char x, y;
	scanf("%c %c", &x, &y);
	printf("%c %c", y, x);
}
int n15()
{
	float f;
	scanf("%f",&f);
	printf("%.2f",f);
}
int n17()
{
	int a;
	scanf("%d", &a);
	printf("%d %d %d", a, a, a);
}
int n18()
{
	int h,m;
	scanf("%d:%d", &h, &m);
	printf("%d:%d",h ,m);
}
int n19()
{
	int y, m,d;
	scanf("%d.%d.%d", &y, &m,&d);
	printf("%04d.%02d.%02d", y, m, d);
}
int n20()
{
	int f, s;
	scanf("%d-%d", &f, &s);
	printf("%06d%0d", f, s);
}
int n21()
{
	char data[51];
	scanf("%s", data);
	printf("%s", data);
}
int n22()
{
	char data[2001];
	fgets(data, sizeof(data)/sizeof(char), stdin);
	printf("%s", data);
}
int n23()
{
	int a,b;
	scanf("%d.%d", &a,&b);
	printf("%d\n%d", a, b);
}
int n24()
{
	char buf[30];
	int i = 0;
	scanf("%s",buf);
while(1)
	{
		printf("\'%c\'", buf[i]);
		i++;
		if (buf[i] == '\0')
			break;
		else if (buf[i] != '0')
			printf("\n");
	}
}
int n25()
{
	int num;
	while (1)
	{
		scanf("%d", &num);
		if (10000 <= num && num<= 99999)
			break;
		else
			printf(" 10,000 <= 입력받는 수 <= 99,999\n");
	}
	char number[6];
	sprintf(number,"%d", num);
	for (int i = 0; i != 5; i++)
	{
		printf("[%c",number[i]);
		for (int j = 4; j >i; j--)
			printf("0");
		if(i == 4)
			printf("]");
		else printf("]\n");
	}
}
int n25_1()
{
	int x,y,i=0,z=0;
	scanf("%d", &x);
	y = x;
	while (z!=5)
	{
		while (x > 10)
		{
			x = x / 10;
			i++;
		}
		x = x * pow(10, i);
		if(z==4)
		printf("[%d]", x);
		else
		printf("[%d]\n", x);
		z++;
		y = y - x;
		x = y;
		i = 0;
	}
}
int n26()
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
}
int n27()
{
	int h, m, s;
	scanf("%d.%d.%d", &h, &m, &s);
	printf("%02d-%02d-%04d", s, m, h);
}
int n28()
{
	double d;
	scanf("%lf", &d);
	printf("%.11lf", d);
}
int n29()
{
	unsigned int n;
	scanf("%u", &n);
	printf("%u", n);
}
int n30()
{
	long long int n;
	scanf("%lld", &n);
	printf("%lld", n);
}
int n31()
{
	 int n;
	scanf("%d", &n);
	printf("%o", n);
}
int n32()
{
	int n;
	scanf("%d", &n);
	printf("%x", n);
}
int n33()
{
	int n;
	scanf("%d", &n);
	printf("%X", n);
}
int n34()
{
	int n;
	scanf("%o", &n);
	printf("%d", n);
}
int n35()
{
	int n;
	scanf("%x", &n);
	printf("%o", n);
}
int n36()
{
	char n;
	scanf("%c", &n);
	printf("%d", n);
}
int n37()
{
	int num;
	scanf("%d", &num);
	printf("%c", num);
	return 0;
}
int n38()
{
	long long n,n1;
	scanf("%lld %lld", &n,&n1);
	printf("%lld", n+n1 );
	return 0;
}
int n39()
{
	long long n, n1;
	scanf("%lld %lld", &n, &n1);
	printf("%lld", n + n1);
	return 0;
}
int n40()
{
	int a;
	scanf("%d", &a);
	printf("%d", -a);
}
int n41()
{
	char a;
	scanf("%c", &a);
	printf("%c", a+1);
}
int n42()
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d",a/b );
}
int n43()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a % b);
}
int n44()
{
	long long n;
	scanf("%lld ", &n);
	printf("%lld", n+1);
	return 0;
}
int n45()
{
	long long n, n1;
	scanf("%lld %lld", &n, &n1);
	printf("%lld\n", n + n1);
	printf("%lld\n", n - n1);
	printf("%lld\n", n * n1);
	printf("%lld\n", n / n1);
	printf("%lld\n", n % n1);
	printf("%.02f", (float)n / n1);
	return 0;
}
int n46()
{
	long long n, n1,n2;
	scanf("%lld %lld %lld", &n, &n1,&n2);
	printf("%lld\n", n + n1+n2);
	printf("%.01f", (float)(n + n1+n2) / 3);
	return 0;
}
int n47()
{
	int n;
	scanf("%d", &n);
	printf("%d", n << 1);
}
int n48()
{
	int a = 1, b = 10;
	scanf("%d %d", &a,&b);
	printf("%d", a << b);
}
int n49()
{
	int a, b;
	scanf("%d %d", &a, &b); printf("%d", a > b);
}
int n50()
{
	int a , b;
	scanf("%d %d", &a, &b); printf("%d", a == b);
}
int n51()
{
	int a, b;
	scanf("%d %d", &a, &b); printf("%d", a < b);
}
int n52()
{
	int a, b;
	scanf("%d %d", &a, &b); printf("%d", a != b);
}
int n53()
{
	int a;
	scanf("%d", &a);
	printf("%d", !a);
}
int n54()
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d", a&&b);
}
int n55()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a || b);
}
int n56()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (a && !b) || (!a && b));
}
int n57()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (a && b) || (!a && !b));
}
int n58()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (!a && !b));
}
int n59()
{
	int a;
	scanf("%d", &a);
	printf("%d", ~a);
}
int n60()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a&b);
}
int n61()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a | b);
}
int n62()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a ^ b);
}
int n63()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a>b?a:b);
}
int n64()
{
	int a, b,c;
	scanf("%d %d %d", &a, &b,&c);
	printf("%d", (a < b ? a : b)<c?(a<b?a:b):c);
}
int n65()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0)
	{
		printf("%d\n", a);
	}

	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}

	if (c % 2 == 0)
	{
		printf("%d", c);
	}
}
int n66()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a % 2 == 0)
	{
		printf("even\n", a);
	}
	else
		printf("odd\n");
	if (b % 2 == 0)
	{
		printf("even\n", b);
	}
	else
		printf("odd\n");
	if (c % 2 == 0)
	{
		printf("even", c);
	}
	else
		printf("odd");
}
int n67()
{
	int a;
	scanf("%d", &a);	
	if ((a >0) == 0)
	{
		printf("minus\n");
	}
	else
		printf("plus\n");
	if (a % 2 == 0)
	{
		printf("even\n");
	}
	else
		printf("odd\n");

}
int n68()
{
	int a;
	scanf("%d", &a);
	if (a >= 90)
	{
		printf("A\n");
	}
	else if (a >= 70)
		printf("B\n");
	else if (a >= 40)
		printf("C");
	else
		printf("D\n");

}
int n69()
{
	char a;
	scanf("%c", &a);
	switch (a)
	{
	case'A':
	{printf("best!!!");
	break;
	}case'B':
	{printf("good!!");
	break;
	}case'C':
	{printf("run!");
	break;
	}case'D':
	{printf("slowly~");
	break;
	}
	default:
	{
		printf("what?");
		break;
	}
	}
}
int n70()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 12:
	case 1:
	case 2:
	{
		printf("winter");
		break;
	}
	case 3:
	case 4:
	case 5:
	{
		printf("spring");
		break;
	}
	case 6:
	case 7:
	case 8:
	{
		printf("summer");
		break;
	}
	case 9:
	case 10:
	case 11:
	{
		printf("fall");
		break;
	}
	}
}
int n71()
{
	int n;
reload: //레이블은 콜론(:)으로 끝내고, 일반적으로 들여쓰기를 하지 않는다.
	scanf("%d", &n);
	if (n == 0)
		return 0;
	else
	{
		printf("%d\n", n);
		goto reload;
	}
}