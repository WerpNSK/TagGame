#pragma once
#include <iostream>
#include <ctime>
struct timer
{
	void time_() {
		int start = clock();
		int end = clock();
		int sec = (end - start) / 1000;		
	}
} t;