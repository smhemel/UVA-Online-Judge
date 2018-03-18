
#include<iostream>
#include<vector>
#include<map>
#include <utility>
using namespace std;
char grid[1010][1010];
//map <pair<int,int>,int>visit;
int visit[1010][1010];
map <char,int> frequency;
void mark(int x,int y,char c)
{
    //visit[make_pair(x,y)]=1;
    visit[x][y] = 1;
    if(grid[x][y+1]==c && !visit[x][y+1])
        mark(x,y+1,c);
    if(grid[x][y-1]==c && !visit[x][y-1])
        mark(x,y-1,c);
    if(grid[x+1][y]==c && !visit[x+1][y])
        mark(x+1,y,c);
    if(grid[x-1][y]==c && !visit[x-1][y])
        mark(x-1,y,c);
}

int main()
{
    int t,test=1,n,m;
    char c;
    cin >> t;
    while(t--)
    {
        cin>>n>>m;
        memset(grid,0,sizeof(grid));
        memset(visit,0,sizeof(visit));
        //visit.clear();
        frequency.clear();
        int max_freq=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>grid[i][j];
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(!visit[i][j])
                {
                    frequency[grid[i][j]]++;
                    mark(i,j,grid[i][j]);
                    if(frequency[grid[i][j]]>max_freq)
                        max_freq = frequency[grid[i][j]];
                }
        cout<<"World #"<<test++<<endl;
        for(int i=max_freq;i>0;i--)
            for(int j=97;j<=122;j++)
            {
                c = j;
                if(frequency[c]==i)
                    cout<<c<<": "<<i<<endl;
            }
    }
    return 0;
}
