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
  
  if(s < t1.s){
    s += 60;
    m --;
  }
  t3.s = s - t1.s;

  if(m < t1.m){
    m += 60;
    h --;
  }
  t3.m = m - t1.m;
    
  if(h < t1.h){
    h += 24;
  }
  t3.h = h - t1.h;
  
  return t3;
}


void Time::display(){
  cout << "t3 = " << h << ":" << m << ":" << s;
}