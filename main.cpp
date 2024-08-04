#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, tot[110], score, tmp[110], percent;
    string str;
    cout << "Enter the number of Trials: ";
    cin >> N;

    while(N > 100){
        cout << "Number of Trials must be smaller or equal to 100!" << endl;
        cout << "Enter the number of Trials: ";
        cin >> N;
    }

    for(int i = 1; i <= N; i++){
        cout << "Trial " << i << ": ";
        cin >> str;
        tot[i] = str.length();

        score = 0;
        for(int j = 0; j < tot[i] - 2; j++){
                tmp[i] = 0;
                if(str[j] == 'A' || str[j+1] == 'A' || str[j+2] == 'A'){
                    tmp[i] += 100;
                }
                if(str[j] == 'B' || str[j+1] == 'B' || str[j+2] == 'B'){
                    tmp[i] += 10;
                }
                if(str[j] == 'C' || str[j+1] == 'C' || str[j+2] == 'C'){
                    tmp[i] += 1;
                }
                if(tmp[i] == 111){
                    score += 1;
                }
        }
        tmp[i] = score;
    }

    for(int i = 1; i <= N ; i++){
        cout << "------------------------------" << endl;
        cout << "Result for Trial " << i << ":\n\n";
        cout << "Total Possible Triads: " << tot[i] - 2 << endl;
        cout << "Spontaneous Alternations: " << tmp[i] << "\n\n";
        float percent = (float)tmp[i] / ((float)tot[i] - 2.00);
        printf("Alternation percentage: %.2f \n",percent);
    }
    cout << "------------------------------" << endl;
    return 0;
}
