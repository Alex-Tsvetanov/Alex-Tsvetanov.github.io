#include <iostream>
#include<stack>

using namespace std;

int main()
{
    unsigned int n, k, first, mul, add, mod;
    cin >> n >> k;
    cin >> first >> mul >> add >> mod;

    unsigned long long sum = first;
    unsigned long long story = first;
    unsigned long long story2 = first;
    unsigned int timesUsed = 1;
    unsigned long long greatestStory= first;
    unsigned long long secondGreatestStory = 0;

    for(unsigned long i = 1; i < n; i++){
        if(timesUsed == k){
            greatestStory = secondGreatestStory;
            secondGreatestStory = 0;
            timesUsed = 0;
        }

        story = (story2 * mul + add) % mod;

        if(story > greatestStory){
            greatestStory = story;
            timesUsed = 0;
        }
        else if(story > secondGreatestStory){
            secondGreatestStory = story;
        }

        sum += greatestStory;
        timesUsed++;
        story2 = story;
    }

    cout << sum << endl;
    return 0;
}
