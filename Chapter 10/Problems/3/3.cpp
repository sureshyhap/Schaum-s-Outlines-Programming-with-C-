#include  <iostream>

class Time {
public:
  // Assumes a correct time will be given
  // Hour 0 is 12 o'clock 
  Time(int hour = 0, int minute = 0, int second = 0, bool isPM = false) :
    hour(hour), minute(minute), second(second), isPM(isPM) {}
  int get_hour() const;
  int get_minute() const;
  int get_second() const;
  void print_time() const;
  void advance(int h, int m, int s);
  // Assumes a correct time will be given
  void reset(int h, int m, int s);
private:
  int hour, minute, second;
  const int MAX_H = 12, MAX_M = 60, MAX_S = 60;
  bool isPM;
};

int Time::get_hour() const {
  return hour;
}

int Time::get_minute() const {
  return minute;
}

int Time::get_second() const {
  return second;
}

void Time::print_time() const {
  std::cout << (hour == 0 ? 12 : hour) << ":" << minute << ":"
	    << second << " "<< (isPM ? "PM" : "AM") << std::endl;
}

void Time::advance(int h, int m, int s) {
  second += s;
  if (second >= MAX_S) {
    int min_add = second / MAX_S;
    second %= MAX_S;
    minute += min_add;
  }
  minute += m;
  if (minute >= MAX_M) {
    int h_add = minute / MAX_M;
    minute %= MAX_M;
    hour += h_add;
  }
  hour += h;
  if (hour >= MAX_H) {
    int toggle_amount = hour / MAX_H;
    hour %= MAX_H;
    if (toggle_amount % 2 != 0) {
      isPM = (isPM == false ? true : false);
    }
  }
}

void Time::reset(int h, int m, int s) {
  hour = h;
  minute = m;
  second = s;
}

int main(int argc, char* argv[]) {
  Time time(10, 50, 36, true);
  time.print_time();
  time.advance(4, 20, 30);
  time.print_time();
  return 0;
}
