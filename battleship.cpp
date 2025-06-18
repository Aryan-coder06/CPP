//Battleship ....
#include <bits/stdc++.h>
using namespace std;

int main () {
    bool ships[3][3] = {{0 , 1, 0}, {1 , 0 , 1}, {0 , 0 , 1}};
    int x ,y, count = 0 , k;
    for(int i = 0; i < 5; ++i) {
        cout << "ENTER THE COORDINATES MY BROTHER : \n" ; 
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        if(ships[x][y] == 1) {
            cout << "Ooo  what a shot My Brother\n" ; 
        }
        else
        cout << "Missed My BROTHER\n" ;
        if(i == 4) {
            k = count;
        }
                   
    }
    cout << "My BROTHER UR Accuracy : " << (k/5)*100 << endl;
    return 0;  
}
  


