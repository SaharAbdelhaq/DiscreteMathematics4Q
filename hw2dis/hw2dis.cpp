#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

// Q1

bool isPrime(int a) {
    //int n;
    bool prime = true;
    for (int i = 2; i < a; ++i) {
        if (a % i == 0) {
            prime = false;
            break;
        }
    }

    return prime;

}

void Q1() {
    int a = 2; //x 
    int r;  /// y 
    bool x = false;

    while (true) {
        r = (a * a) + a + 41;
        x = isPrime(r);
        if (!x) {
            cout << "the statment is false " << endl;
            cout << a;
            break;
        }
        a++;
    }
    return;
}


//Q2

void Q2(int N) {

    //int size = N - 1;
   // int* x = new int[size];

    for (int num = 0; num < N; num++)
    {
        if (num % 13 == 0 && num % 100 == 15)
        cout << num << " ";
    }

}

//Q3
void Q3() {

    for (int N = 9; N < 100; N++) {
        int digit = N % 10;
        int r = digit *7 ;

        if (r<N) {
            cout << N<< " ";
        }

    }
    cout << endl;
}

//Q4
/*
int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
*/

int gcd(int n) {
    for (int i = 1; i <= n; i++)
        for (int s = 1; s < n; s++)
            if (n % i == 0 && s % i == 0)
                return s;
}


void Q4(int N) {
    int mas;
    int p=3, q=11;
    int n;

    n = p * q;
    int m = (p - 1) * (q - 1);
    int e = gcd(m);
    cout << "e: " << e << endl;;

    //e such GCD (e , m ) = 1
    //cout << "Enter the msg: ";
    //cin >> mas;
    int y = pow(N, e);
    int encmsg = y % n;
    cout << "the msg after encription: " << encmsg << endl;



  /*  while (true) {
        int r = rand();
        if (isPrime(r))
            cout << "" << r;
             p = r;
    }
    */

    int dd = 0;
    while (true) {
        if ((dd * e) % m == 1) {
            cout << dd << endl;
            break;
        }
        dd++;
    }
    int z = pow(N, dd);
    int decmsg = y % n; 
    cout << "Msg after decription: " << decmsg << endl;

}

/*
bool isPrime(int N) {

    bool prime;
    if ((N == 2) || (N == 3)) {
        prime = true;
     //   cout << N << " is prime" << endl;
    }
    else if ((N % 2 == 0) || (N % 3 == 0)) {
        prime = false;
      //  cout << N << " is not prime" << endl;
    }
    else {
        prime = true;
      //  cout << N << "is prime" << endl;

    }
}
*/


// Driver code
int main()
{
    int N, N2, N3,N4;
    int Q;

    while (1) {
        cout << "Menu to choose the required question \n1.Q1 \n2.Q2 \n3.Q3 \n4.Q4 \n5.Exit"<<endl;
        cout << "Enter number of Q you want: " << endl;
        cin >> Q;

        switch (Q)
        {

        case 1:
            cout << ">" << endl;
            Q1();
            break;


        case 2:
            cout << "Enter number: ";
            cin >> N2;
            Q2(N2);
            break;

        case 3:
            Q3();
            break;

        case 4:
            cout << "Enter msg to encrypt it: ";
            cin >> N4;
            Q4(N4);

            break;

        case 5:
            return 0;
        }

    }

    return 0;

}

