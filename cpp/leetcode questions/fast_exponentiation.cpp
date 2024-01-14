// finding modulo for fst exponentiation

class Soultion 
{
	public:
		long long int PowMod(long long int a,long long int b,long long int M)
		{
		  long long int ans = 1;
		  while(b > 0)
		  { 
		      if (b & 1)
		        ans = (ans*a) % M;
		  
		  
		      a = (a * a) % M;
		      
		      b = b >> 1; // or b = b/2
		    
		}

        return (ans % M);
}
		    
		};