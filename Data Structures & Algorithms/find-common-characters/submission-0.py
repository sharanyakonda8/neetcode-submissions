class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        
        s=Counter(words[0])
        for i in range(1,len(words)):
            s=s & Counter(words[i])
        result = []

        for ch in s:
            result.extend([ch] * s[ch])

        return result
        
       
        