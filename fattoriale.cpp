#include <iostream>
typedef unsigned int uint ;

uint fatt(uint n){
    uint fattor = 1;
    for(uint i = 0; i<n; i++){
        fattor *= n-i;
    }
    return(fattor);
}
uint fattRicorsiva(uint n){
    if(n==0) return 1;
    return (n* fattRicorsiva(n-1));
}

int main(){
    int n;
    std::cout<<"inserisci il numero da cui vuoi ottenere il fattoriale:\n";
    std::cin>>n;
    uint fattoriale;
    fattoriale= fatt(n);
    std::cout << fattoriale << std::endl;
    fattoriale= fattRicorsiva(n);
    std::cout << fattoriale;
    return 0;
}
