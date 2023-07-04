****Pattern 1****

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

void pattern1(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

****Pattern 2****

* 
* * 
* * * 
* * * * 
* * * * *

void pattern2(int n) {
    for(int i = 0; i < n; i++) {
        for ( int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

****Pattern 3****

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

****Pattern 4****

1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

void pattern4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

****Pattern 5****

* * * * *
* * * * 
* * * 
* *  
*

void pattern5(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

****Pattern 6****

1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1

void pattern6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j <<" ";
        }
        cout << endl;
    }
}

****Pattern 7****

    *
   ***  
  *****
 *******
*********

void pattern7(int n) {
    for(int i = 0 ; i < n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // stars
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        // space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

****Pattern8****

*********
 *******
  *****
   ***
    *

void pattern8(int n){
    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // stars
        for(int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        // space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

****Pattern-9****

    *
   * *  
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
    
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

****Pattern-10****

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

void pattern10(int n) {
    for(int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2 * n - i;
        for ( int j = 1     ; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

****Pattern-11*****

1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

****Pattern-12*****

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

void pattern12(int n){
    int space = 2 * (n - 1);
    for(int i = 1; i <= n; i++) {    
        //numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // spaces
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }
        //numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

****Pattern-13*****

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

void pattern13(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

 ****Pattern-14*****
 
A
AB
ABC
ABCD
ABCDE

void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A'+ i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

 ****Pattern-15*****
 
ABCDE
ABCD
ABC
AB
A

void pattern15(int n) {
    for(int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

 ****Pattern-16*****
 
A
BB
CCC
DDDD
EEEEE

void pattern16(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }  
}

 ****Pattern-17*****
 
   A
  ABA
 ABCBA
ABCDCBA

void pattern17(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if( j <= breakpoint) ch++;
            else ch--;
        }
        // space
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}


****Pattern-18*****

E
E D
E D C
E D C B
E D C B A


void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'E' - i ; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;   
    }
}

****Pattern-19*****

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

void pattern19(int n) {
    int inis = 0;
    for(int i = 0; i < n; i++) {
        // stars
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        // spaces
        for(int j = 0; j < inis; j++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }       
    inis = 2*n-2;
    for (int i = 1; i <= n; i++) {
       // stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for(int j = 0; j < inis; j++) {
            cout << " ";
        }
        // stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}

****Pattern-20*****

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

void pattern20(int n) {
    int spaces = 2*n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // spaces
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

****Pattern-21*****

*****
*   *
*   *
*   *
*****


void pattern21(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }    
}


****Pattern-22*****
 
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

void pattern22(int n){
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n -1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down) , min(left, right)));
        }
        cout << endl;
    }
}
