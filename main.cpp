#include <iostream>

using namespace std;

int main()
{
    int goal, assist;
    cout <<"Masukkan jumlah goal   : ";
    cin >> goal;
    cout <<"Masukkan jumlah assist : ";
    cin >> assist;
    float bonusGoal = 2 * goal, bonusAssist = 1.2 * assist;
    float gajiBudi = (322 + bonusAssist + bonusGoal) * 7;
    float gajiManager = gajiBudi * 0.05;
    cout << "Total bonus mencetak goal   : " << bonusGoal << endl;
    cout << "Total bonus mencetak assist : " << bonusAssist << endl;
    cout << "Total gaji selama 7 musim   : " << gajiBudi << endl;
    cout << "Gaji manager                : " << gajiManager << endl;

}
