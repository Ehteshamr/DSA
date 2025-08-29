class Solution {
public:
    long long flowerGame(int n, int m) {
    //     vector <long long > a;
    //     vector <long long > b;
    //     for (long long  i=0;i<=n-1;++i)
    //     {
    //         a.push_back(i+1);
    //     }
    //     for (long long j=0;j<=m-1;++j)
    //     {
    //         b.push_back(j+1);
    //     }

    //   long long count=0; long long sum;
    //     for (int i=0;i<=n-1;++i)
    //     {
    //         for (int j=0;j<=m-1;++j)
    //         {
    //              sum=a[i]+b[j];
    //             if (sum%2)count++;
    //         }
    //     }
    //     return count;

        long long  oddx=0,evx=0,oddy=0,evy=0;
       for (long long  i=0;i<=n-1;++i)
        {
            if (i%2)oddx++;
            else if (i%2==0)evx++;
        }
        for (long long j=0;j<=m-1;++j)
        {
           if (j%2)oddy++;
            else if (j%2==0)evy++;
        }

        return (oddx*evy)+(evx*oddy);

        
    }
};