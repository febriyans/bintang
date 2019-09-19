#include <iostream>

using namespace std;

int main()
{
int a,b,c=5,d;
int e, f=4, j, k, i=1, l=9, m=1, n=0;

for (e=0;e<f; e++){
    for(j=l; j>0; j--){
        cout << " ";
    }
    for (i=n; i<m; i+=1){
        for (k=0; k<=i; k++){
            cout << "*";
        }
    }
    n+=2;
    m+=2;
    l--;
    cout << endl;
}
for (a=1;a<c;a++){
    for(b=a;b<c;b++){
        cout<<" ";
    }
     for(b=1;b<c;b++){
        cout<<"*";
     }
     for (d=a; d>0; d--){
        cout << "  ";
     }
     for(b=1;b<c;b++){
        cout<<"*";
     }
    cout<<endl;
}
    int h,g;


    for (h=1;h<=2;h++) {
        for (g=1;g<=18;g++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
