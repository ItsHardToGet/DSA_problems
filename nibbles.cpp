class Solution {
public:
    int swapNibbles(int n) {
        bitset<8> x(n);
        

        string t = x.to_string();
        
        // Split the string into two halves
        string first_half = t.substr(0, 4);
        string second_half = t.substr(4, 4);
        
        // Swap the nibbles
        string swapped = second_half + first_half;
        
        // Convert the swapped string back to bitset<8>
        bitset<8> swapped_bits(swapped);
        
        // Convert bitset to integer
        return static_cast<int>(swapped_bits.to_ulong());
    }
};




// Given a number n, Your task is to swap the two nibbles and find the resulting number. 

// A nibble is a four-bit aggregation, or half an octet. There are two nibbles in a byte.
//  For example, the decimal number 150 is represented as 10010110 in an 8-bit byte. This
//   byte can be divided into two nibbles: 1001 and 0110.