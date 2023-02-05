 int maximumGroups(vector<int>& grades) {
        int b=1;
        return (int)max((-b+sqrt(b*b+8*grades.size()))/2, (-b-sqrt(b*b+8*grades.size()))/2);  
    }