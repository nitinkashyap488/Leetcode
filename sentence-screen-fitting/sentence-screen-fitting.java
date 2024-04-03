class Solution {
    public int wordsTyping(String[] sentence, int rows, int cols) {
        int count = 0;
        int rowIndex = 0;
        int wordIndex = 0;
        int spaces = cols;
        
        while (rowIndex < rows) {
            if (sentence[wordIndex].length() <= spaces) {
                spaces -= sentence[wordIndex].length();
                spaces--;
                wordIndex++;
            } else {
                rowIndex++;
                spaces = cols;
            }
            
            if (wordIndex == sentence.length) {
                count++;
                wordIndex = 0;
            }
        }
        
        return count;
    }
}