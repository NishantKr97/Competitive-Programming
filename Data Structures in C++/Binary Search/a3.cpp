bool ispossible(vector<int> &C, long long maxUnitsToPaint, int painter){
    long long temp=maxUnitsToPaint;
    int n=C.size();
    int i=0;
    while(i<n){
        if(painter==0)
            return false;
        if(temp-C[i]<0){
            temp=maxUnitsToPaint;
            painter--;
        }
        else{
          temp-=C[i];
          i++;
        }
    }
    return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
   if(C.size()==0)
        return 0;
  long long l=0,r=LLONG_MAX,mid=B,ans=0;
  long long mod=10000003;
  while(l<=r){
      mid=(l+r)>>1;
      if(ispossible(C,(long long)mid/B,A)){
          ans=mid%mod;
          r=mid-1;
      }else l=mid+1;
  }
    return (int)ans;
}
