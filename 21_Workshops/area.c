#include <stdio.h>
/*
// function declaration
float ComputeCircleArea (float radius);


int main()
{
	float myRadius = 4.545;
	float area = ComputeCircleArea(myRadius);
	printf("The Area is %f\n", area );
	return 0;
}



// function implementation
float ComputeCircleArea(float radius){
	return radius*radius*3.1415926535;
}
*/
//--------------------------------------------------------------------

//Wert als Pass by Reference

// function declaration
void ComputeCircleArea (float radius, float *area);


int main()
{
	float myRadius = 4.545;
	float area = 0;
	ComputeCircleArea(myRadius, &area);
	printf("The Area is %f\n", area );
	return 0;
}



// function implementation
void ComputeCircleArea(float radius, float *area){
	*area = radius*radius*3.1415926535;
}
