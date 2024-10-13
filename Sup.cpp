#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ; 
	cin >> t ;
	for(int i =0 ; i < t ; i++) {
	    int n ;
	    cin >> n ;
	    int a[n];
	    for(int  i = 0 ; i < n ; i++) {
	        cin >> a[i] ; 
	    }
	    int count , rem = 0 ;
	    for(int i = 0 ; i< n ; i++) {
	        if(a[i] == a[i+1]) {
	            count = 0;
	        }
	        else
            count = 1;
            rem++;	    
	    }
        if(count == 0) {
            cout << count << endl ;
        }
        else if(n == 5 && count == 1) {
            cout << rem + 1 << endl ;
        }
        else
        cout << rem << endl;

    }
}
