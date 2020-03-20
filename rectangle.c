#include <stdio.h>
#include <math.h>

struct Rectangle
{
	int x1, x2, y1, y2;

};

void rectanglePerimeter(struct Rectangle rectangle);

int main()

{
	struct Rectangle Rectangle1;

	printf("please enter input for x1:");

	scanf_s("%d", &Rectangle1.x1);
	printf("please enter input for x2:");
	scanf_s("%d", &Rectangle1.x2);
	printf("please enter input for y1:");
	scanf_s("%d", &Rectangle1.y1);
	printf("please enter input for y2:");
	scanf_s("%d", &Rectangle1.y2);

	rectanglePerimeter(Rectangle1);


	getch();
}


void rectanglePerimeter(struct Rectangle rectangle)
{
	int length = rectangle.y2 - rectangle.y1;
	int width = rectangle.x2 - rectangle.x1;

	int perimeter = (2 * length) + (2 * width);

	printf("the perimeter is : %d \n", perimeter);

	getchar();
}