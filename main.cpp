#include <iostream>
using namespace std;

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

void lab_pr4(){
    int n;
    cin >> n;
    for(int i=10; i<n; i+=10){
        if(i%10 == 0)    cout << i << " ";
    }
}

int sod(int n){ // sum of digits
    int sum=0;
    while(n>0){
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


int main() {
    problem5();
    //lab_pr4();
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
