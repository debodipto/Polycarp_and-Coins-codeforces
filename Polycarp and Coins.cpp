#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for (int z = 1; z <= t; z++){
        int n;
        cin >> n;
        int one = n/3;
        int two = n/3;

        if(n%3 == 1){
            one++;
        }else if(n%3 == 2){
            two++;
        }
        
        cout << one << " " << two << endl;
    }
    return 0;
}
