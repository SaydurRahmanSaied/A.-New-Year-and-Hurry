#include<iostream>
using namespace std;

bool solve(int m, int time){
    int time_needed = (m* (m+1)/2)*5;
    return time_needed <=time;
}

int problemSolve(int n, int k){
    int time = 240 - k;
    int left = 0, right = n, count = 0;
    while (left<=right)
    {
        int mid =(right+left)/2;
        if (solve(mid, time))
        {
            count = mid;
            left = mid +1;
        }
        else
        {
            right = mid -1;
        }
        
    }
    return count;
    

}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<problemSolve(n,k)<<endl;
    return 0;
}