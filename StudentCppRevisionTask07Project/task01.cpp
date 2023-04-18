﻿#include "tasks.h"

/*	Task 01. Max and Swimming Pool [Макс и бассейн]
 *
 *	Макс плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил,
 *	что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего)
 *	и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Макс,
 *  чтобы выбраться из бассейна на бортик и не утонуть?
 *
 *  Примечание
 *  1) Не забудьте про "защиту от дурака": если данные некорректны, то нужно возвратить -1.
 *
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int: N и M - соответствующие размеры бассейна,
 *  X и Y - расстояние до бортиков, где X и(или) Y могут быть также нулями.
 *
 *	Формат выходных данных [output]
 *	Возвратите число метров, которое нужно проплыть Максу до бортика, чтобы не утонуть (а может пусть тонет...),
 *  или -1, если данные введены некорректно.
 *
 *	[ input 1]: 23 52 8 43
 *	[output 1]: 8
 *
 *	[ input 2]: 14 7 6 11
 *	[output 2]: 1
 *
 *	[ input 3]: 23 52 0 43
 *	[output 3]: 0
 *
 *	[ input 4]: 23 52 -1 43
 *	[output 4]: -1
 *
 *	[ input 5]: 0 52 6 43
 *	[output 5]: -1
 *
 *	[ input 6]: 10 20 6 21
 *	[output 6]: -1
 */

int task01(int n, int m, int x, int y) {
	if (n < m) {
		int cords = n;
		n = m;
		m = cords;
	}

	if (n <= 0 || m <= 0 || x < 0 || y < 0 || y > n || x > m) {
		return -1;
	}
	int x1 = n - y;
	int y1 = m - x;
	x = x1 < x ? x1 : x;
	y = y1 < y ? y1 : y;
	return x < y ? x : y;
}