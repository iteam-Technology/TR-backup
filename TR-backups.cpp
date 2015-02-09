int main() {
               
double a,total,seconds,minutes;
double MB = .005;
               
while(a = true){
  cin >> a;
  seconds = (a / MB ); 
  minutes = seconds / 60;
  total = minutes / 60;
               
    if(a <= 1)
      return 0;
               
 cout << a << " is original backup size " << " and it would take " << total << " hours to backup" << endl;
  }
 
return 0;
}
