// Q9. The Messenger’s Path 
//  A messenger wants to go from (0,0) to (n-1,m-1). Cells with 1 are blocked. Can he 
// reach? 
// Input: 
 
//  3 3 
// 0 0 0 
// 0 1 0 
// 0 0 0 
// ● Output: true
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    bool visited[100][100] = {false};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    if(arr[0][0]==1 || arr[n-1][m-1]==1){  
        cout << "false";
        return 0;
    }

    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0] = true;

    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,-1,1};
    bool canReach = false;

    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int x = cur.first;
        int y = cur.second;

        if(x==n-1 && y==m-1){  
            canReach = true;
            break;
        }

        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m && arr[nx][ny]==0 && !visited[nx][ny]){
                q.push({nx,ny});
                visited[nx][ny] = true;
            }
        }
    }

    cout << (canReach ? "true" : "false");
    return 0;
}
