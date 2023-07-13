 bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> mm,mm2;
        for(int i=0;i<n;i++)mm[arr[i]]++;
        for(auto x:mm){
            if(mm2[x.second])return false;
            mm2[x.second]++;
        }
        return true;
    }