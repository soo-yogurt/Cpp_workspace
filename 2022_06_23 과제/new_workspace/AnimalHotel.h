#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include "Animal.h"
using namespace std;


class AnimalHotel
{
	enum {
		LASTROOM = 8
	};

	struct ROOM {
		int checkin = 0;
		Animal* Guests;
	};


private:
	ROOM room[LASTROOM];

public:
	AnimalHotel() {}
	~AnimalHotel()
	{}

	// 입실에 필요한 정보를 받아 체크인
	void CheckIn();

	// 호실을 말하면 체크아웃을 할 수 있다.
	void CheckOut();

	// 시작 메뉴를 불러온다.
	void FrontDesk();

	// 호실 별로 입실을 알려준다.
	void List();

};