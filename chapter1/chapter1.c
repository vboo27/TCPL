#include "chapter1.h"
#include <stdio.h>


void hello_world(void)
{
	printf("Hello World!\n");
}

/*
  当 fahr = 0, 20 ... 300时，分别打印华氏温度和摄氏温度 
*/
void temperature(void)
{
	int cels = 0;		// 摄氏度 
	int fahr = 0;		// 华氏度 
	int step = 20;		// 步长 
	int lower = 0;		// 华氏度下限 
	int upper = 300;	// 华氏度上限 
	
	fahr = lower;
	while (fahr <= upper)
	{
		cels = (fahr - 32)  * 5 / 9;
		printf("%d \t %d\n", fahr, cels);
		fahr += step;
	} 
}

/*
	Print Fahrenheit-Celsius table
	for fahr = 0, 20 ... 300; floating-point version
*/
void temperature_floating(void)
{
	float fahr, celsius;
	float step, lower, upper;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	fahr = lower;
	printf("Fahr\tCelsius\n");
	while(fahr <= upper)
	{
		celsius = (fahr - 32) * 5 / 9;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr += step; 
	}	
}

/*
	Print Celsius-Fahrenheit table
	for Celsius = -30, 10 ... 100; 
*/
void temperature_c2f(void)
{
	float celsius, fahr;
	float step, lower, upper;

	lower = -50.0;
	upper = 100.0;
	step = 10.0;

	celsius = lower;
	printf("Celsius\tFahr\n");
	while(celsius <= upper)
	{
		fahr = (celsius * 9 / 5) + 32;
		printf("%3.0f\t%3.0f\n", celsius, fahr);
		celsius += step;
	}
} 


void chapter1_call(void)
{
//	hello_world();	
//	temperature();
//	temperature_floating();
	temperature_c2f();
}
