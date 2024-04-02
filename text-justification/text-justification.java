class Solution {
    public List<String> fullJustify(String[] words, int maxWidth) {
        List<String> list = new ArrayList<>();
        int start = 0;
        
        while(start < words.length){
            int end = start + 1;
            int lineLength = words[start].length();
            while(end < words.length && lineLength + 1 + words[end].length() <= maxWidth){
                lineLength += words[end].length() + 1;
                end++;
            }
            StringBuilder sb = new StringBuilder(words[start]);
            if(end != start + 1 && end != words.length){
                int totalSpace = maxWidth - lineLength;
                int spaceCount = end - start - 1;
                
                int spaceBetweenWords = totalSpace / spaceCount;
                int spaceLeft = totalSpace % spaceCount;
                
                for(int i = start + 1; i < end ; i++){
                    for(int j = 0; j <= spaceBetweenWords; j++){
                        sb.append(' ');
                    }
                    if(spaceLeft > 0){
                        sb.append(' ');
                        spaceLeft--;
                    }
                    sb.append(words[i]);
                }
            }else{
                for(int i = start + 1; i < end; i++){
                    sb.append(' ');
                    sb.append(words[i]);
                }
                while(sb.length() < maxWidth){
                    sb.append(' ');
                }
            }
            list.add(sb.toString());
            start = end;
        }
        return list;
    }
}