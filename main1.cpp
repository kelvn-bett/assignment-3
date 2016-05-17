#include "Pen.h"
#include "FountainPen.h"
#include "Roller.h"

using namespace std;

void WriteWithPen(Pen &pen) {
	cout << pen.drawLine() << endl;
	cout << pen.drawCircle() << endl;
}
int main() {
	FountainPen fp;
	WriteWithPen(fp);
	RollerBallPen rbp("A Pen that Uses a Roller Ball");
	WriteWithPen(rbp);
	Pen pen;
	WriteWithPen(pen);
	return 0;
}
