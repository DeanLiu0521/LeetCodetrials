class Solution{
public:
	int fib(int N){
		if(N==0){
			return0;
		}
		if(N==2|| N==1){
			return 1;
		}
		int prev=1,curr=1;
		for(int i=3;i<=N;i++){
			int sum =prev+curr;
			prev=curr;
			curr = sum;
		}
		return curr;
	}
}
