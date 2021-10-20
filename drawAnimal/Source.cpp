#include "DrawAnimal.h"
#define SCREEN_WIDTH 1200
#define SCREEN_HEIGHT 700


void main()
{
	SetWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	fixConsoleWindow();

     drawdino1(20, 5);
	 drawdino2(20, 10);
	drawbear1(20, 15);
	drawbear2(20, 20);
	drawrabbitthin1(20, 25);
	drawrabbitthin2(20, 30);
	drawrabbitthin3(20, 35);
	drawrabbitthin4(20, 40);
	drawb(20, 45);
	gotoXY(30, 50);

}