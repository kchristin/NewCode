#include <iostream>
#include <string>

int main(){

    std::string S;
    int N;
    std::cout << "Enter shift +/- 26 : ";
    std::cin >> N;
    std::cout << "Enter plain one word message (A-Z only) : " ;
    std::cin >> S;

    char C[S.size() + 1];
    S.copy(C, S.size() + 1);
    
    for (int i = 0; i < S.size(); i++){
        if(static_cast<int>(C[i] + N) >= 65 && static_cast<int>(C[i] + N) <= 90){
            std::cout << char(C[i] + N);
        }
        else{
            int F = static_cast<int>(C[i] + N) - 90;
            std::cout << char(65 + (F - 1));
        }
    }
    std::cout << ' ' << std::endl;

    return 0;
}