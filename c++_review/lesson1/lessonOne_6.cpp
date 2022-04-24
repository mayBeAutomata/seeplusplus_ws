/*The example for using cin from the video.
**There is an error in the video. The correct
**program is shown below.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

    string userName; 
    cout<<"Tell me your nickname?: ";
    getline(cin, userName);
    cout<<"Hello "<<userName<<"\n";
    return 0;

}