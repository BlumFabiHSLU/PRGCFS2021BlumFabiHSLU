#include <stdio.h>

//alles was if else und so abarbeitet macht der Präprozessor
//danach kommt der compiler, der überprüft die Syntax
//linker schaut, dass alle Referenzen einen Einstiegspunkt haben
//MEP RELEVANT

struct Point2d {
	double x;
	double y;
};


struct Rectangle {
	struct Point2d bottomLeftCorner;
	struct Point2d topRightCorner;
	double area;
	double perimeter;
};

double ComputeRectangleArea(struct Rectangle *pRect);

struct Rectangle myRectangle;


struct Rectangle *pRectangle = &myRectangle;  // pointer to struct Rectangle!

int main(){
	myRectangle.bottomLeftCorner.x = 5.0;
	myRectangle.bottomLeftCorner.y = 5.0;
	myRectangle.topRightCorner.x = 35.0;
	myRectangle.topRightCorner.y = 35.0;

	pRectangle->area = ComputeRectangleArea(&myRectangle);
	
	printf("Area: %.2f\n", pRectangle->area);
	return 0;
}


double ComputeRectangleArea(struct Rectangle *pRect){
	double deltaX = (pRect->topRightCorner.x - pRect->bottomLeftCorner.x);
	double deltaY = (pRect->topRightCorner.y - pRect->bottomLeftCorner.y);
	return deltaX*deltaY;
}
	
