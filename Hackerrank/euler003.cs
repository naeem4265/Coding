using System;
class Solution
{
    static void Main(String[] args)
    {
        long t = Convert.ToInt64(Console.ReadLine());
        while(t>0)
        {
            long n = Convert.ToInt64(Console.ReadLine());
            long ans = 0;
            for(long i=2; i*i<=n; i++)
            {
                while(n%i==0)
                {
                    if(ans<i)  ans = i;
                    n = n/i;
                }
            }
            if(n>1 && ans<n)   ans = n;  
            Console.WriteLine(ans);
            t--;
        }
        
    }
}

