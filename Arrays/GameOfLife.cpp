class Solution {
     private: bool issafe(int x,int y,int r,int c){
        return (x>=0 &&x<r &&y>=0 &&y<c);
     }
public:
   
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size();
        int c=board[0].size();
        int dx[]={1,1,0,-1,-1,-1,0,1};
        int dy[]={0,1,1,-1,0,1,-1,-1};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int livecounts=0;
                for(int k=0;k<8;k++){
                   if(issafe(i+dx[k],j+dy[k],r,c)&& abs(board[i+dx[k]][j+dy[k]])==1){
                       livecounts++;
                   }
                }
            
        if(board[i][j]==0&&livecounts==3){
            board[i][j]=+2;
        }
        else if(board[i][j]==1&&(livecounts<2||livecounts>3)){
            board[i][j]=-1;
        }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 board[i][j] = board[i][j] > 0 ? 1 : 0;
            }
        }
         
    }

    
};
