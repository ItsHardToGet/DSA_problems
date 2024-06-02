class Solution{

	public:
	int rec(int p,int N,int X,int Y){
	    
	    if(p==0 and(N==1 || N==X ||N==Y)){
	        return 1;
	    }
	    if(p==1 and(N==1 || N==X ||N==Y)){
	        return 0;
	    }
	    
	    if(p==0){
	        int a = rec(1,N-1,X,Y);
	        if(N>X){
	            int b = rec(1,N-X,X,Y);
	            a = a||b;
	        }
	        if(N>Y){
	            int c = rec(1,N-Y,X,Y);
	            a = a||c;
	        }
	        return a;
	    }
	    else{
	        int a = rec(0,N-1,X,Y);
	        if(N>X){
	            int b = rec(0,N-X,X,Y);
	            a = a and b;
	        }
	        if(N>Y){
	            int c = rec(0,N-Y,X,Y);
	            a = a and c;
	        }
	        return a;
	    }
	}
	int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		int p = 0;
		return rec(p,N,X,Y);
	}

};

// Intuition
// The recursive func,ulates the game where each player makes optimal moves. It explores all possible moves based on the current player, remaining coins, and allowed moves.

// Implementation
// Recursive Function (rec):
// The function takes parameters p (player's turn: 0 or 1), N (number of coins), X, and Y.
// Base cases: If the game is over (p == 0 and (N == 1 || N == X || N == Y)), return 1 (Geek wins), else if (p == 1 and (N == 1 || N == X || N == Y)), return 0 (Friend wins).
// If it's Geek's turn (p == 0), recursively check all possible moves (pick 1, X, or Y coins), and return true if any of the moves lead to a winning position.
// If it's Friend's turn (p == 1), recursively check all possible moves and return true only if all moves lead to winning positions.
// Main Function (findWinner):
// Set the initial player (p) to 0 (Geek's turn).
// Call the recursive function with initial parameters.




// Given three numbers n, x, and y, Geek and his friend are playing a coin game. In the beginning, there are n coins. In each move, a player can
//  pick x, y, or 1 coin. Geek always starts the game. The player who picks the last coin wins the game. The task is to determine whether Geek will
//   win the game or not if both players play optimally.