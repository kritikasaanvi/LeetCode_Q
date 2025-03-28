class Solution {
public:
    bool canAliceWin(int npp) {
        if(npp<10) return false;
        int totalstonee = 0;
        int currentremove=10;
        int turn=1;
        while(totalstonee + currentremove <= npp){
            totalstonee += currentremove;
            currentremove--;
            turn++;
        }
        return (turn % 2 == 0);
    }
};