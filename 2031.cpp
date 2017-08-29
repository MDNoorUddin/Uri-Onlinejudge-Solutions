#include <iostream>
 
using namespace std;
 
int main() {
 
    string player1,player2;
    int t;
    cin>>t;
    while(t-->0)
    {
        cin>>player1;
        cin>>player2;
        
        if(player1=="ataque"&&player2=="pedra")
        {
            cout<<"Jogador 1 venceu\n";
        }
        if(player1=="pedra"&&player2=="ataque")
        {
            cout<<"Jogador 2 venceu\n";
        }
        if(player1=="ataque"&&player2=="ataque")
        {
            cout<<"Aniquilacao mutua\n";
        }
        if(player1=="pedra"&&player2=="pedra")
        {
            cout<<"Sem ganhador\n";
        }
        if(player1=="papel"&&player2=="papel")
        {
            cout<<"Ambos venceram\n";
        }
        if(player1=="pedra"&&player2=="papel")
        {
            cout<<"Jogador 1 venceu\n";
        }
        if(player1=="papel"&&player2=="pedra")
        {
            cout<<"Jogador 2 venceu\n";
        }
        if(player1=="papel"&&player2=="ataque")
        {
            cout<<"Jogador 2 venceu\n";
        }
        if(player1=="ataque"&&player2=="papel")
        {
            cout<<"Jogador 1 venceu\n";
        }
    }
 
    return 0;
}
