 int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0;
        int count=0;
        for(int i=0;i<costs.size();i++){
            if(sum+costs[i]<=coins){
                sum+=costs[i];
                count++;
            }else{
                break;
            }
        }
        return count;
    }