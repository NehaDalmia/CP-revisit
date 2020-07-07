https://www.interviewbit.com/problems/matrix-median/
int Solution::findMedian(vector<vector<int> > &A) 
{
   int min=INT_MAX;
   int max=INT_MIN;
   int i;
   int r=A.size();
   int c=A[0].size();
   int i,j;
   for(i=0;i<r;i++)
   {
        if(A[i][0]<min)
        min=A[i][0];
        if(A[i][c-1]>max)
        max=A[i][c-1];
   }
   int no=(r*c+1)/2;
   while(min<max)
   {
       int mid = min + (max - min) / 2; 
        int place = 0; 
  
        
        for (int i = 0; i < r; ++i) 
            place += upper_bound(A[i], A[i]+c, mid) - A[i]; 
        if (place < desired) 
            min = mid + 1; 
        else
            max = mid; 
   }
   
}
