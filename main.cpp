#include <iostream>
using namespace std;

//HW
void problem1(){
    int n;
    cin >> n;
    int gap = 0;
    for(int i=n; i>0; i--) {
        for(int j=1; j<=i; j++){
            cout << j;
        }
        int gap = (n-i)*2;
        while(gap--){
            cout << " ";
        }
        for(int g=i; g>0; g--) {
            cout << g;
        }
        cout << endl;
    }
}
void problem2(){
    int num, t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> num;
        while(num>0){
            cout << num%10 << " ";
            num /= 10;
        }
        cout << endl;
    }
}
int sod(int n){ // sum of digits
    int sum=0;
    /*
    while(n>0){
       sum += n%10;
       n/=10;
    }*/
    for(int i=n; i>0; i/=10){
        sum += n%10;
        n/=10;
    }
    return sum;
}
void problem3(){
    int n, a, b, sum=0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++){
        if(sod(i)>=a && sod(i)<=b)  sum +=i;
    }
    cout << sum << endl;
}
void problem4(){
    int n, x;
    cout << "Enter the apartment number (n) and number of apartments per floor (x): ";
    cin >> n >> x;

    if (n <= 2) {
        cout << 1 << endl;
    } else {
        n -= 2;
        int floorNumber = (n + x - 1) / x + 1;

        cout << floorNumber << endl;
    }

}
void problem5(){
    int N;
    cin >> N;
    int count = 0;
    int num = 1;
    while (true) {
        if (num % 3 != 0 && num % 10 != 3) {
            count++;
        }
        if (count == N) {
            cout << num << endl;
            break;
        }
        num++;
    }
}

void lab_pr4(){
    int n;
    cin >> n;
    for(int i=10; i<n; i+=10){
        if(i%10 == 0)    cout << i << " ";
    }
}
void problem10(){
    int n, posc=0, negc =0, sum=0;
    while(n!=0){
        cin >> n;
        if(n>0) posc += 1;
        else if(n<0)    negc += 1;
        sum += n;
    }
    cout << posc << endl;
    cout << negc << endl;
    cout << posc + negc << endl;
    cout << (float)sum/(posc + negc) << endl;
}
void problem11(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cout << '*';
        cout << endl;
    }
}
void problem12(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)  cout << '*';
        cout << endl;
    }
}
void problem13(){
    int n;
    while(1) {
        cin >> n;
        if (n == 0) {
            cout << "The depth is 0" << endl;
            break;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) cout << i;
            cout << endl;
        }
    }
}
int problem16(){ // sum of digits
    int n;
    cin >> n;
    int sum=0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return sum;
}
void problem17(){
    int n, sum=0, indx= 0;
    cin >> n;
    while(n>0){
        sum += (n%10) * (pow(2, indx));
        n/=10;
        indx++;
    }
    cout << "The decimal number is " << sum << endl;
}

bool leap_year(int n){
    if((n%4==0 && n%100!=0) || n%400 == 0)  return true;
    return false;
}

int month_days(int month, int year){
    switch(month){
        case 1: return ((leap_year(year)) ? 29 : 28);
        case 3:
        case 5:
        case 8:
        case 10:
            return 30;
        default:
            return 31;
    }

}

void problem24(){
   int y, d;
   cin >> y >> d;

}

int main() {
    problem24();
    //cout << sod(9023);
    //cout << problem16() << endl;
    return 0;
}
/*
    for(int i=n; i>0; i--){
        for(int g=j; g>=1; g--){
            cout << g;
        }
        for(int j=1; j<=i; j++){
            cout << j;
        }

        cout << endl;
    }
*/
