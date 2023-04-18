#pragma once
#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(23, 52, 8, 43) == 8
		&& task01(14, 7, 6, 11) == 1

		&& task01(23, 52, -1, 43) == -1
		&& task01(0, 52, 6, 43) == -1
		&& task01(24, 10, 8, -24) == -1
		&& task01(-24, 10, 8, 24) == -1
		&& task01(24, -10, 8, 24) == -1
		&& task01(24, 0, 8, 24) == -1
		&& task01(24, 10, 9, 25) == -1
		&& task01(10, 24, 9, 25) == -1
		&& task01(14, 10, 11, 7) == -1
		&& task01(10, 14, 11, 7) == -1

		&& task01(23, 52, 0, 43) == 0
		&& task01(7, 14, 6, 11) == 1
		&& task01(14, 8, 4, 8) == 4
		&& task01(8, 14, 4, 8) == 4
		&& task01(8, 14, 4, 12) == 2
		&& task01(52, 23, 20, 8) == 3
		&& task01(8, 25, 8, 23) == 0
		&& task01(53, 41, 20, 25) == 20
		&& task01(46, 41, 20, 25) == 20
		&& task01(10, 6, 1, 2) == 1;

		
	cout << "Task 01 [Max and Swimming Pool]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(7, 6, 1) == "1 6 7"
		&& task02(6, 7, 2) == "2 6 7"
		&& task02(7, 7, 4) == "4 7 7"
		&& task02(7, 4, 7) == "4 7 7"
		&& task02(4, 7, 7) == "4 7 7"
		&& task02(1, 2, 3) == "1 2 3"
		&& task02(1, 3, 2) == "1 2 3"
		&& task02(2, 1, 3) == "1 2 3"
		&& task02(2, 3, 1) == "1 2 3"
		&& task02(3, 1, 2) == "1 2 3"
		&& task02(3, 2, 1) == "1 2 3"
		&& task02(1, 1, 1) == "1 1 1";

	cout << "Task 02 [Ordering Numbers]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(4, 6, 5, 6, 5, 6)
		&& !task03(5, 3, 5, 2, 3, 4)
		&& !task03(3, 5, 5, 2, 3, 4)
		&& !task03(5, 5, 3, 2, 3, 4)
		&& !task03(3, 5, 5, 2, 4, 3)
		&& !task03(3, 5, 5, 3, 2, 4)
		&& !task03(3, 5, 5, 3, 4, 2)
		&& !task03(3, 5, 5, 4, 2, 3)
		&& !task03(3, 5, 5, 4, 3, 2)
		&& !task03(5, 5, 5, 4, 4, 4)
		&& !task03(5, 5, 4, 4, 4, 4)
		&& !task03(5, 4, 5, 4, 4, 4)
		&& !task03(4, 5, 5, 4, 4, 4)
		&& !task03(5, 4, 4, 4, 4, 4)
		&& !task03(4, 5, 4, 4, 4, 4)
		&& !task03(4, 4, 5, 4, 4, 4)
		&& !task03(2, 1, 1, 1, 1, 1)
		&& !task03(1, 2, 1, 1, 1, 1)
		&& !task03(1, 1, 2, 1, 1, 1)

		&& task03(4, 5, 6, 6, 5, 6)
		&& task03(6, 4, 5, 6, 5, 6)
		&& task03(6, 5, 4, 6, 5, 6)
		&& task03(5, 6, 4, 6, 5, 6)
		&& task03(5, 4, 6, 6, 5, 6)
		&& task03(4, 6, 5, 6, 6, 5)
		&& task03(4, 6, 5, 5, 6, 6)
		&& task03(4, 4, 4, 5, 5, 5)
		&& task03(1, 1, 1, 1, 1, 1)
		&& task03(1, 1, 1, 2, 1, 1)
		&& task03(1, 1, 1, 1, 2, 1)
		&& task03(1, 1, 1, 1, 1, 2)
		&& task03(4, 4, 4, 4, 4, 4)
		&& task03(4, 4, 4, 4, 5, 5)
		&& task03(4, 4, 4, 5, 4, 5)
		&& task03(4, 4, 4, 5, 5, 4)
		&& task03(4, 4, 4, 4, 4, 5)
		&& task03(4, 4, 4, 4, 5, 4)
		&& task03(4, 4, 4, 5, 4, 4);

	cout << "Task 03 [Rectangular World 3]" << (result ? RIGHT : WRONG) << endl;
}