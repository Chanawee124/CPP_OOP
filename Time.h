class Time{
  private:
    int h,m,s;
  public:
    void getTime();
    Time operator-(Time t1);
    void display();
};

void Time::getTime(){
    cout << endl << "Hour: ";
    cin >> h;
    cout << "Min: ";
    cin >> m;
    cout << "Sec: ";
    cin >> s;
  while(h>=24 || m>=60 || s>=60){
    cout << "incorrectly time! please try again." << endl ;
    cout << "Hour: ";
    cin >> h;
    cout << "Min: ";
    cin >> m;
    cout << "Sec: ";
    cin >> s;
    cout << endl;
  };
}

Time Time::operator-(Time t1){
  Time t3;
  int hour,min,sec;
  hour = h;
  min = m;
  sec = s;
  
  if(sec < t1.s){
    sec += 60;
    min --;
  }
  t3.s = sec - t1.s;

  if(min < t1.m){
    min += 60;
    hour --;
  }
  t3.m = min - t1.m;
    
  if(hour < t1.h){
    hour += 24;
  }
  t3.h = hour - t1.h;
  
  return t3;
}


void Time::display(){
  cout << "t3 = " << h << ":" << m << ":" << s;
}