#include<iostream>

int worker[200000];
int numWorkerWithMostFriends;
int mostFriends;
int numWorkerWithLeastFriends;
int leastFriends = 200005;

int main()
{
    int n;
    std::cin>>n;
    for( int i=0;i<n;i++ )
    {
        int handshakes;
        int givenHandshakes = 0;
        std::cin>>handshakes;
        worker[i] = handshakes;
        //std::cout<<worker[i]<<" "<<leastFriends<<std::endl;
        if( worker[i] <= leastFriends )
        {
            leastFriends = worker[i];
            numWorkerWithLeastFriends = i;
        }
        if( worker[i] >= mostFriends )
        {
            mostFriends = worker[i];
            numWorkerWithMostFriends = i;
        }else
        {
            if( handshakes > 0)
            {
                mostFriends++;
                worker[numWorkerWithMostFriends]++;
                givenHandshakes++;
            }
        }
        for( int j=i-1;j>=0 and givenHandshakes<handshakes;j-- )
        {
            if( j != numWorkerWithMostFriends and j != numWorkerWithLeastFriends )
            {
                worker[j]++;
                givenHandshakes++;
                if( worker[j] > mostFriends )
                {
                    mostFriends = worker[j];
                    numWorkerWithMostFriends = j;
                }
            }
        }
       // std::cout<<givenHandshakes<<std::endl;
        if( givenHandshakes<handshakes )
        {
            leastFriends++;
            worker[numWorkerWithLeastFriends]++;
        }
    }

    std::cout<<mostFriends<<std::endl<<leastFriends<<std::endl;
//    for( int i=0;i<n;i++ )
//        std::cout<<worker[i]<<" ";
//    std::cout<<std::endl;
}
