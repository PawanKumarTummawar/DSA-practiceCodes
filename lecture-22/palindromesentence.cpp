//Another sexy solution
class Solution{
public:
	bool sentencePalindrome(string str) 
	{ 
	    int l = 0, h = str.length(); 

	    while (l <= h) { 
	        // If there is another symbol in left 
	        // of sentence 
	        if (!(str[l] >= 'a' && str[l] <= 'z')) 
	            l++; 

	        // If there is another symbol in right 
	        // of sentence 
	        else if (!(str[h] >= 'a' && str[h] <= 'z')) 
	            h--; 

	        // If characters are equal 
	        else if (str[l] == str[h]) 
	            l++, h--; 

	        else
	            return false; 
	    } 
	    return true; 
	} 
};