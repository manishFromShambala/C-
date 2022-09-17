
#include<graphics.h>
//using namespace std;

int main(){
	
	int gd=DETECT, gm;
	
	initgraph(&gd, &gm, "");
	
	line(150, 46, 450, 500);
	line(250, 46, 350, 500);
	line(350, 46, 550, 500);
	getch();
	closegraph();
	//return 0;
}
