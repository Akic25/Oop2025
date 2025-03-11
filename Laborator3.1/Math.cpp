#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<stdarg.h>
#include"Math.h"

int v[101];

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}
int Math::Add(double x, double y,double z)
{
	return x + y+z;
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y,int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y,double z)
{
    return x * y * z;
}
int Math::Add(int count,...)
{
	va_list args;//declar lista 
	va_start(args, count);
	int sum = 0;
	for (int i = 0; i < count; i++)
		sum += va_arg(args, int);
	va_end(args);
	return sum;
}
char* Math::Add(const char* a, const char* b)
{ 
	int sum;
	if (a == nullptr || b == nullptr)
		return nullptr;
	else
	{
	size_t lenc = strlen(a) + strlen(b) + 1;
	char* c = new char[lenc];
	strcpy(c, a);
	strcat(c, b);
	return c;
	}

}
