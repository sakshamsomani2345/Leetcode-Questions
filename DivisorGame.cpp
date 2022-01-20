// 1025. Divisor Game
// Alice and Bob take turns playing a game, with Alice starting first.
// Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:
// Choosing any x with 0 < x < n and n % x == 0.
// Replacing the number n on the chalkboard with n - x.
// Also, if a player cannot make a move, they lose the game.
// Return true if and only if Alice wins the game, assuming both players play optimally.
// Example 1:
// Input: n = 2
// Output: true
// Explanation: Alice chooses 1, and Bob has no more moves.
// Example 2:
// Input: n = 3
// Output: false
// Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.
#include <iostream>
using namespace std;
bool divisorGame(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
}
bool recursion(int n){
if(n==1){
    return 0;
}
else{
    for (int i = 0; i < n; i++)
    {
        if(n%i==0){
            if(recursion(n-i)){
                return 1;
            }
        }
        return 0;
    }
    
}
}
int main()
{
    int n;
    cin >> n;
    cout << divisorGame(n);
}