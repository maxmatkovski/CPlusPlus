#include <iostream>
using namespace std;

int main(){
    
    int n1=1,n2=1,n3,N,i;

    cout << "Type an integer bigger than or equal to 0: " << endl;
    
    cin >> N;

    cout << "The first " << N << " Fibonacci numbers are:" << endl;
    
    if (N == 1){
        cout << n1 << endl;
    } else if (N == 2){
        cout << n1 << " " << n2 << endl;
    } else if(N > 2){
        cout << n1 << " " << n2 << " ";
        for(i=2;i<N;i++){
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2; n2 = n3;
        }
        cout << endl;
    }
    return 0;
}
