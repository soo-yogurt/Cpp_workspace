#pragma once
#include <sstream>
#include "Place.h"

using namespace std;

struct Local
{
	string Name[10];
	Place* place;

};

class Sueol {

	Local Local[25];

public:
	Sueol() {
		Local->Name[0] = "중구";
		Local->Name[1] = "종로구";
		Local->Name[2] = "용산구";
		Local->Name[3] = "성동구";
		Local->Name[4] = "동대문구";
		Local->Name[5] = "성북구";
		Local->Name[6] = "도봉구";
		Local->Name[7] = "은평구";
		Local->Name[8] = "서대문구";
		Local->Name[9] = "마포구";
		Local->Name[10] = "강서구";
		Local->Name[11] = "구로구";
		Local->Name[12] = "영등포구";
		Local->Name[13] = "동작구";
		Local->Name[14] = "관악구";
		Local->Name[15] = "강남구";
		Local->Name[16] = "강동구";
		Local->Name[17] = "송파구";
		Local->Name[18] = "서초구";
		Local->Name[19] = "양천구";
		Local->Name[20] = "중랑구";
		Local->Name[21] = "노원구";
		Local->Name[22] = "광진구";
		Local->Name[23] = "강북구";
		Local->Name[24] = "금천구";
	}


};

class Busan {

	Local Local[15];

public:
	Busan() {
		Local->Name[0] = "중구";
		Local->Name[1] = "서구";
		Local->Name[2] = "동구";
		Local->Name[3] = "영도구";
		Local->Name[4] = "진구";
		Local->Name[5] = "동래구";
		Local->Name[6] = "남구";
		Local->Name[7] = "북구";
		Local->Name[8] = "해운대구";
		Local->Name[9] = "사하구";
		Local->Name[10] = "금정구";
		Local->Name[11] = "강서구";
		Local->Name[12] = "연제구";
		Local->Name[13] = "수영구";
		Local->Name[14] = "사상구";
		Local->Name[15] = "기장군";
	}
	
};


class Daegu
{
	Local Local[7];

public:
	Daegu() {
		Local->Name[0] = "중구";
		Local->Name[1] = "동구";
		Local->Name[2] = "서구";
		Local->Name[3] = "남구";
		Local->Name[4] = "북구";
		Local->Name[5] = "수성구";
		Local->Name[6] = "달서구";
		Local->Name[7] = "달성군";
	}

};


//class City
//{
//
//	Place* City[229];
//
//	Place* 서울_중구;
//	Place* 서울_종로구;
//	Place* 서울_용산구;
//	Place* 서울_성동구;
//	Place* 서울_동대문구;
//	Place* 서울_성북구;
//	Place* 서울_도봉구;
//	Place* 서울_은평구;
//	Place* 서울_서대문구;
//	Place* 서울_마포구;
//	Place* 서울_강서구;
//	Place* 서울_구로구;
//	Place* 서울_영등포구;
//	Place* 서울_동작구;
//	Place* 서울_관악구;
//	Place* 서울_강남구;
//	Place* 서울_강동구;
//	Place* 서울_송파구;
//	Place* 서울_서초구;
//	Place* 서울_양천구;
//	Place* 서울_중랑구;
//	Place* 서울_노원구;
//	Place* 서울_광진구;
//	Place* 서울_강북구;
//	Place* 서울_금천구;
//	Place* 부산_중구;
//	Place* 부산_서구;
//	Place* 부산_동구;
//	Place* 부산_영도구;
//	Place* 부산_진구;
//	Place* 부산_동래구;
//	Place* 부산_남구;
//	Place* 부산_북구;
//	Place* 부산_해운대구;
//	Place* 부산_사하구;
//	Place* 부산_금정구;
//	Place* 부산_강서구;
//	Place* 부산_연제구;
//	Place* 부산_수영구;
//	Place* 부산_사상구;
//	Place* 부산_기장군;
//	Place* 대구_중구;
//	Place* 대구_동구;
//	Place* 대구_서구;
//	Place* 대구_남구;
//	Place* 대구_북구;
//	Place* 대구_수성구;
//	Place* 대구_달서구;
//	Place* 대구_달성군;
//	Place* 인천_중구;
//	Place* 인천_동구;
//	Place* 인천_미추홀구;
//	Place* 인천_부평구;
//	Place* 인천_남동구;
//	Place* 인천_서구;
//	Place* 인천_연수구;
//	Place* 인천_계양구;
//	Place* 인천_강화군;
//	Place* 인천_옹진군;
//	Place* 광주_동구;
//	Place* 광주_서구;
//	Place* 광주_북구;
//	Place* 광주_광산구;
//	Place* 광주_남구;
//	Place* 대전_동구;
//	Place* 대전_중구;
//	Place* 대전_서구;
//	Place* 대전_유성구;
//	Place* 대전_대덕구;
//	Place* 울산_중구;
//	Place* 울산_남구;
//	Place* 울산_동구;
//	Place* 울산_북구;
//	Place* 울산_울주군;
//	Place* 세종_세종시;
//	Place* 경기_수원시;
//	Place* 경기_성남시;
//	Place* 경기_의정부시;
//	Place* 경기_안양시;
//	Place* 경기_부천시;
//	Place* 경기_안산시;
//	Place* 경기_평택시;
//	Place* 경기_광명시;
//	Place* 경기_구리시;
//	Place* 경기_양주시;
//	Place* 경기_여주시;
//	Place* 경기_화성시;
//	Place* 경기_시흥시;
//	Place* 경기_파주시;
//	Place* 경기_고양시;
//	Place* 경기_광주시;
//	Place* 경기_연천군;
//	Place* 경기_포천시;
//	Place* 경기_가평군;
//	Place* 경기_양평군;
//	Place* 경기_이천시;
//	Place* 경기_용인시;
//	Place* 경기_안성시;
//	Place* 경기_김포시;
//	Place* 경기_동두천시;
//	Place* 경기_과천시;
//	Place* 경기_군포시;
//	Place* 경기_남양주시;
//	Place* 경기_오산시;
//	Place* 경기_의왕시;
//	Place* 경기_하남시;
//	Place* 강원_춘천시;
//	Place* 강원_원주시;
//	Place* 강원_동해시;
//	Place* 강원_강릉시;
//	Place* 강원_속초시;
//	Place* 강원_태백시;
//	Place* 강원_삼척시;
//	Place* 강원_홍천군;
//	Place* 강원_횡성군;
//	Place* 강원_영월군;
//	Place* 강원_평창군;
//	Place* 강원_정선군;
//	Place* 강원_철원군;
//	Place* 강원_화천군;
//	Place* 강원_양구군;
//	Place* 강원_인제군;
//	Place* 강원_고성군;
//	Place* 강원_양양군;
//	Place* 충북_청주시;
//	Place* 충북_충주시;
//	Place* 충북_제천시;
//	Place* 충북_보은군;
//	Place* 충북_옥천군;
//	Place* 충북_영동군;
//	Place* 충북_진천군;
//	Place* 충북_괴산군;
//	Place* 충북_음성군;
//	Place* 충북_단양군;
//	Place* 충북_증평군;
//	Place* 충남_천안시;
//	Place* 충남_아산시;
//	Place* 충남_보령시;
//	Place* 충남_공주시;
//	Place* 충남_서산시;
//	Place* 충남_금산군;
//	Place* 충남_태안군;
//	Place* 충남_논산시;
//	Place* 충남_부여군;
//	Place* 충남_서천군;
//	Place* 충남_청양군;
//	Place* 충남_홍성군;
//	Place* 충남_예산군;
//	Place* 충남_당진시;
//	Place* 충남_계룡시;
//	Place* 전북_전주시;
//	Place* 전북_군산시;
//	Place* 전북_정읍시;
//	Place* 전북_남원시;
//	Place* 전북_김제시;
//	Place* 전북_완주군;
//	Place* 전북_진안군;
//	Place* 전북_무주군;
//	Place* 전북_장수군;
//	Place* 전북_임실군;
//	Place* 전북_순창군;
//	Place* 전북_고창군;
//	Place* 전북_부안군;
//	Place* 전북_익산시;
//	Place* 전남_목포시;
//	Place* 전남_여수시;
//	Place* 전남_순천시;
//	Place* 전남_나주시;
//	Place* 전남_광양시;
//	Place* 전남_담양군;
//	Place* 전남_곡성군;
//	Place* 전남_구례군;
//	Place* 전남_고흥군;
//	Place* 전남_보성군;
//	Place* 전남_화순군;
//	Place* 전남_장흥군;
//	Place* 전남_강진군;
//	Place* 전남_해남군;
//	Place* 전남_영암군;
//	Place* 전남_무안군;
//	Place* 전남_함평군;
//	Place* 전남_영광군;
//	Place* 전남_장성군;
//	Place* 전남_완도군;
//	Place* 전남_진도군;
//	Place* 전남_신안군;
//	Place* 경북_포항시;
//	Place* 경북_경주시;
//	Place* 경북_김천시;
//	Place* 경북_안동시;
//	Place* 경북_구미시;
//	Place* 경북_영주시;
//	Place* 경북_영천시;
//	Place* 경북_문경시;
//	Place* 경북_상주시;
//	Place* 경북_군위군;
//	Place* 경북_의성군;
//	Place* 경북_청송군;
//	Place* 경북_영양군;
//	Place* 경북_영덕군;
//	Place* 경북_청도군;
//	Place* 경북_고령군;
//	Place* 경북_성주군;
//	Place* 경북_칠곡군;
//	Place* 경북_예천군;
//	Place* 경북_봉화군;
//	Place* 경북_울진군;
//	Place* 경북_울릉군;
//	Place* 경북_경산시;
//	Place* 경남_진주시;
//	Place* 경남_통영시;
//	Place* 경남_김해시;
//	Place* 경남_밀양시;
//	Place* 경남_거제시;
//	Place* 경남_의령군;
//	Place* 경남_함안군;
//	Place* 경남_창녕군;
//	Place* 경남_양산시;
//	Place* 경남_고성군;
//	Place* 경남_사천시;
//	Place* 경남_남해군;
//	Place* 경남_하동군;
//	Place* 경남_산청군;
//	Place* 경남_함양군;
//	Place* 경남_거창군;
//	Place* 경남_합천군;
//	Place* 경남_창원시_통합;
//	Place* 제주_제주시;
//	Place* 제주_서귀포시;
//
//public:
//	int SetCount() {
//		
//	}
//
//};
