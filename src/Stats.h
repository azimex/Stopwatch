#ifndef STATS_H
#define STATS_H

#include <vector>
#include <ncurses.h>

using namespace std;
class Stats{
private:
	vector<float> solves;
public:
	Stats();
	void add(float solve);
	float getTotalSolves();
	float getAverage();
	float getAverage10();
	float getAverage5();
	void reset();
	void print(WINDOW* window, int start_y, int start_x);
};


#endif