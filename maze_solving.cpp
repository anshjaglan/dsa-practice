#include<iostream>
#include<queue>
#include<vector>
#include<climits>

using namespace std;

int main(){
    vector<vector<int>> maze = {
    {0,0,0,1},
    {1,0,1,0},
    {0,0,0,0}
};


int rows = maze.size();
int cols = maze[0].size();

int startRow = 0;
int startCol = 0;

int endRow = 2;
int endCol = 3;

vector<vector<bool>> visited(rows, vector<bool>(cols, false));
queue<pair<int, int>> q;

q.push({startRow, startCol});
visited[startRow][startCol] = true;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

while(!q.empty()){
    pair<int, int> current = q.front();
    q.pop();

    int r = current.first;
    int c = current.second;

    if( r == endRow && c == endCol){
        
        cout<<"Path found" <<endl;
        return 0;
    }
    for(int i = 0; i < 4; i++){
        int newRow = r + dr[i];
        int newCol = c + dc[i];

        if(newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols){
            if(maze[newRow][newCol] == 0 && !visited[newRow][newCol]){
                visited[newRow][newCol] = true;
                q.push({newRow,newCol});
            }
        }
    }
}
cout <<" Path found " << endl;
return 0;


};