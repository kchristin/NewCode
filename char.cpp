#include <iostream>
#include <ctime>

using namespace std;

const int N = 120;

char generate_random_char()
{
    int i = 26.0 * rand() / RAND_MAX;

    if (static_cast<double>( rand() ) / RAND_MAX  < 0.5) {
        return static_cast<char>( 65+i );
    }
    
    return static_cast<char>( 97+i );
}

int main()
{
    srand(time(0));

    char arr[N];
    for (int i=0; i<N; ++i) {
        arr[i] = generate_random_char();
    }

    cout << "Input array:" << endl;
    for (int i=0; i<N; ++i) {
        cout << arr[i];
    }
    cout << endl;

    int num = 0;
    cout << "counts:" << endl;
    for (int j = 65; j <= 90; j++) {
        for (int i = 0; i < N; i++){
            if ((arr[i] == static_cast<char>(j)) || (arr[i] == static_cast<char>((j + 32))))
            {
                num++;
            }
        }
        cout << static_cast<char>(j) << ":" << num << endl;
        num = 0;      
    }
    cout << "Total number of charecters : " << N << endl; 

    return 0;
}