#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of processes\n";
    cin>>n;
    int wait[n];
    int burst[n];
    int arrival[n];
    int turn[n];
    for(int i =0;i<n;i++)
    {
        cout<<"Enter burst time for process P"<<i<<"\n";
        cin>>burst[i];
    }
    for(int i =0;i<n;i++)
    {
        cout<<"Enter arrival time for process P"<<i<<"\n";
        cin>>arrival[i];
    }
    wait[0]=0;
    int burstTime =burst[0];
    for(int i =1;i<n;i++)
    {
        wait[i] = burstTime - arrival[i];
        burstTime+=burst[i];
    }
    for(int i =0;i<n;i++)
    {
        turn[i] = burst[i]+wait[i];
    }
    int sum_wait =0;
    int sum_turn =0;
    for(int i =0;i<n;i++)
    {
        cout<<"Waiting Time for P"<<i<<" = "<<wait[i]<<"\n";
        cout<<"Turn Around Time for P"<<i<<" = "<<turn[i]<<"\n";
        sum_turn+=turn[i];
        sum_wait+=wait[i];
    }
    double avg_wait = (double)sum_wait/n;
    double avg_turn = (double)sum_turn/n;
    cout<<"Average waiting time = "<<avg_wait<<"\n";
    cout<<"Average Turn Around time = "<<avg_turn;
    return 0;
}