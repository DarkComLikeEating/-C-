#include "xr.hpp"

using namespace std;

class Time {
private:
	int hour, minute, second;
	void SetHour(int h) {
		hour = ((h >= 0 && h < 24) ? h : 0);
	}
	void SetMinute(int m) {
		minute = ((m >= 0 && m < 60) ? m : 0);
	}
	void SetSecond(int s) {
		second = ((s >= 0 && s < 60) ? s : 0);
	}
public:
	void SetTime(int h, int m, int s) {
		SetHour(h);
		SetMinute(m);
		SetSecond(s);
	}
	int GetHour() const{return hour;}
	int GetMinute() const{return minute;}
	int GetSecond() const{return second;}
	void PrintTime() {
		cout << hour << ": " << minute << ": " << second << endl;
	}
};
void Adjust(Time& now, const Time& prc) {
	now.SetTime(prc.GetHour(), prc.GetMinute(), prc.GetSecond());
}

int main() {
	Time now;
	now.SetTime(12, 23, 48);
	Time prc;
	prc.SetTime(12, 25, 30);
	Adjust(now, prc);
	xrv(now.PrintTime());
	
	return 0;
}