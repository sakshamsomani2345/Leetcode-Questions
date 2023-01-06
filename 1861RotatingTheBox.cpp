 vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
          int M = box.size();
        int N = box[0].size();
        
        vector<vector<char>> ans(N, vector<char> (M));
        
        //Step-1 : Move stones to rightmost side by taking each row separately     
        for(int i = 0; i < box.size(); ++i) {
            
            vector<char> curr = box[i];
            int stones;
            for(int j = 0,back = 0; j < box[0].size(); ++j) {
                
                stones = 0;
                int inn = 0;
				
				// counting the number of stones until next obstacle is encountered
                while(j < box[0].size() && curr[j] != '*') {
                    if(curr[j] == '#')
                        stones++;
                    ++j;
                }
                
                back = j - 1;
                
				// putting the stones behind the obstacle
                while(back >= 0 && stones-- > 0) {
                    curr[back--] = '#';
                    inn = 1;
                }
                
				// since stones have moved to the right, then overriding the left part with empty spaces
                while(back >= 0 && inn && curr[back] != '*') 
                    curr[back--] = '.';
                
            }
			
            box[i] = curr;
        }
        
        //Step-2 : Rotate the matrix
        for(int i = 0; i < box.size(); ++i) {
            auto curr = box[i];
            int row = box[0].size(), col = box.size(); 
            int ii = 0, jj = col - 1 - i, idx = 0;
            while(ii < row) {
                ans[ii++][jj] = curr[idx++];
            }
        }
        
        return ans;
    }